# Project Title: 0x1C. C - Makefiles

## Description
This repository contains a series of tasks related to Makefiles in the context of learning C programming. The project aims to teach the fundamentals of Makefiles, compilation, and basic C programming concepts. Each task involves creating and managing Makefiles for compiling C code.

## Learning Objectives
After completing this project, you should be able to:

- Understand the concepts of make and Makefiles.
- Know when, why, and how to use Makefiles.
- Define rules and utilize them effectively.
- Differentiate between explicit and implicit rules.
- Identify and implement common and useful rules.
- Utilize variables in Makefiles to improve maintainability.

## Tasks
### Task 0: Create your first Makefile
- **File:** `0-Makefile`
- **Description:** Create a Makefile with the following specifications:
  - Name of the executable: `school`
  - Rule: `all`
  - The `all` rule builds the executable.
  - No variables are required.

### Task 1: Enhance the Makefile with Variables
- **File:** `1-Makefile`
- **Description:** Enhance the previous Makefile with the following changes:
  - Define variables `CC` (compiler) and `SRC` (source files).
  - The executable name remains `school`.
  - The `all` rule still builds the executable.

### Task 2: Create a Useful Makefile
- **File:** `2-Makefile`
- **Description:** Create a Makefile with the following features:
  - Define variables `CC`, `SRC`, `OBJ`, and `NAME`.
  - The `all` rule builds the executable.
  - The `all` rule should recompile only updated source files.
  - Do not list all `.o` files explicitly.

### Task 3: Makefile with Cleaning Rules
- **File:** `3-Makefile`
- **Description:** Create a Makefile that includes cleaning rules:
  - `all`: Builds the executable.
  - `clean`: Deletes temporary and executable files.
  - `oclean`: Deletes object files.
  - `fclean`: Deletes temporary, executable, and object files.
  - `re`: Forces recompilation of all source files.
  - Define variables `CC`, `SRC`, `OBJ`, `NAME`, and `RM`.

### Task 4: Complete Makefile with Compiler Flags
- **File:** `4-Makefile`
- **Description:** Create a comprehensive Makefile with the following features:
  - `all`, `clean`, `oclean`, `fclean`, and `re` rules.
  - Define variables `CC`, `SRC`, `OBJ`, `NAME`, `RM`, and `CFLAGS`.
  - Compiler flags include `-Wall`, `-Werror`, `-Wextra`, and `-pedantic`.

### Task 5: Island Perimeter Function
- **File:** `5-island_perimeter.py`
- **Description:** Implement a Python function `island_perimeter(grid)` that calculates the perimeter of a rectangular island represented by a grid. Constraints:
  - `grid` is a list of lists with 0 (water) and 1 (land) integers.
  - Each cell represents a square with side length 1.
  - Cells are connected horizontally and vertically.
  - The grid is surrounded by water, and there is only one island.

## Copyright
This project is protected by the ALX license. All rights reserved.
