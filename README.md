# C++ Module 01: Memory, Pointers, References, and Switches

This repository contains the solutions for Module 01 of the C++ curriculum. This module serves as an introduction to fundamental C++ concepts that build upon a C foundation, focusing on memory management, address manipulation, and basic class interactions.

---

## Core Concepts Covered

This module explores the following key topics:

-   **Memory Allocation**: Differentiating between stack (`automatic`) and heap (`dynamic`) memory using `new` and `delete`.
-   **Pointers vs. References**: Understanding the syntactic and semantic differences between pointers (`*`) and references (`&`).
-   **Dynamic Arrays**: Allocating and deallocating arrays of objects with `new[]` and `delete[]`.
-   **File I/O**: Using C++ streams (`ifstream`, `ofstream`) for file manipulation.
-   **Pointers to Member Functions**: Implementing a dispatch table to call member functions dynamically, avoiding `if/else` chains.
-   **Switch Statements**: Using `switch` with fall-through logic to create filtered behavior.

---

## Exercise Breakdown

### `ex00: BraiiiiiiinnnzzzZ`
-   **Goal**: To demonstrate the fundamental difference between stack and heap allocation by creating `Zombie` objects that announce their creation and destruction.

### `ex01: Moar brainz!`
-   **Goal**: To practice dynamic array allocation by implementing a function that creates a "horde" of `Zombie` objects in a single block of memory and correctly deallocates it.

### `ex02: HI THIS IS BRAIN`
-   **Goal**: To demystify C++ references by showing that a reference is an alias for an existing variable, sharing the same memory address.

### `ex03: Unnecessary violence`
-   **Goal**: To model different object relationships using pointers and references. A `HumanA` uses a reference to a `Weapon` (must always be armed), while a `HumanB` uses a pointer (may be unarmed).

### `ex04: Sed is for losers`
-   **Goal**: To build a simple file search-and-replace tool. This exercise requires using C++ file streams and implementing a replacement algorithm without using the forbidden `std::string::replace` method.

### `ex05: Harl 2.0`
-   **Goal**: To introduce pointers to member functions. A `Harl` class is implemented to complain at different levels by calling the appropriate function from an array of function pointers, avoiding `if/else` logic.

### `ex06: Harl filter`
-   **Goal**: To implement a logging filter using a `switch` statement. The program takes a log level as input and displays all messages from that level and above, making effective use of `case` fall-through.

---

## How to Compile and Run

Each exercise is contained in its own directory (`ex00`, `ex01`, etc.) and includes a `Makefile`.

1.  **Navigate to an exercise directory**:
    ```bash
    cd ex00
    ```

2.  **Compile the project**:
    ```bash
    make
    ```

3.  **Run the executable**:
    The executable name is specified in the `Makefile` for each exercise.
    ```bash
    ./braiiiiiiinnnzzzZ
    ```

4.  **Clean up**:
    -   `make clean`: Removes the intermediate object files (`.o`).
    -   `make fclean`: Removes object files and the final executable.
    -   `make re`: Cleans and rebuilds the project.

All projects are compiled using `c++` with the flags `-Wall -Wextra -Werror -std=c++98`.
