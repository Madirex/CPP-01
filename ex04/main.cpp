/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 18:11:27 by anmateo-          #+#    #+#             */
/*   Updated: 2025/08/03 18:11:28 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

std::string replaceString(const std::string& subject, const std::string& search, const std::string& replace)
{
	std::stringstream result;
	size_t pos = 0;
	size_t lastPos = 0;

	if (search.empty())
	{
		return subject;
	}

	while ((pos = subject.find(search, lastPos)) != std::string::npos)
	{
		result << subject.substr(lastPos, pos - lastPos);
		result << replace;
		lastPos = pos + search.length();
	}

	result << subject.substr(lastPos);
	return result.str();
}

bool validateArguments(int argc, char* argv[], std::string& filename, std::string& s1, std::string& s2)
{
	if (argc != 4)
	{
		std::cerr << "Error: Invalid number of arguments." << std::endl;
		std::cerr << "Usage: ./sed_is_for_losers <filename> <s1> <s2>" << std::endl;
		return false;
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty())
	{
		std::cerr << "Error: The string to be replaced (s1) cannot be empty." << std::endl;
		return false;
	}
	return true;
}

bool readFileContent(const std::string& filename, std::string& content)
{
	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open())
	{
		std::cerr << "Error: Could not open input file '" << filename << "'" << std::endl;
		return false;
	}

	std::stringstream buffer;
	buffer << inputFile.rdbuf();
	inputFile.close();
	content = buffer.str();
	return true;
}

bool processAndWriteFile(const std::string& filename, const std::string& content, const std::string& s1, const std::string& s2)
{
	std::string newContent = replaceString(content, s1, s2);
	std::string outputFilename = filename + ".replace";
	std::ofstream outputFile(outputFilename.c_str());

	if (!outputFile.is_open())
	{
		std::cerr << "Error: Could not create output file '" << outputFilename << "'" << std::endl;
		return false;
	}

	outputFile << newContent;
	outputFile.close();
	std::cout << "Successfully replaced occurrences in '" << outputFilename << "'" << std::endl;
	return true;
}

int main(int argc, char *argv[])
{
	std::string filename, s1, s2;
	if (!validateArguments(argc, argv, filename, s1, s2))
	{
		return 1;
	}

	std::string fileContent;
	if (!readFileContent(filename, fileContent))
	{
		return 1;
	}

	if (!processAndWriteFile(filename, fileContent, s1, s2))
	{
		return 1;
	}

	return 0;
}
