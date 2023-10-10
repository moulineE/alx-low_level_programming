# 0x1E - C Search Algorithms

**Project Deadline**: Oct 12, 2023, 4:00 AM

## Overview

Welcome to the 0x1E C Search Algorithms project! In this project, you will learn about various search algorithms in the C programming language. The goal of this project is to familiarize yourself with linear and binary search algorithms and their time and space complexities. You will also practice implementing these algorithms and analyzing their performance.

## Learning Objectives

By the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

- What is a search algorithm
- What is a linear search
- What is a binary search
- What is the best search algorithm to use depending on your needs

## Copyright & Plagiarism

You are tasked to come up with solutions for the tasks yourself to meet the above learning objectives. You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work. Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

### General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- You are only allowed to use the `printf` function of the standard library. Any call to another function like `strdup`, `malloc`, etc., is forbidden.
- The prototypes of all your functions should be included in your header file called `search_algos.h`
- Don’t forget to push your header file
- All your header files should be include guarded

## Tasks

### Task 0: Linear Search

Write a function that searches for a value in an array of integers using the Linear search algorithm.

**Prototype**: `int linear_search(int *array, size_t size, int value);`

- `array`: a pointer to the first element of the array to search in
- `size`: the number of elements in the array
- `value`: the value to search for

Your function must return the first index where `value` is located. If `value` is not present in the array or if `array` is NULL, your function must return -1. Every time you compare a value in the array to the value you are searching, you have to print this value.

Example:

```c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int main(void)
{
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
    return (EXIT_SUCCESS);
}
```

Example output:

```bash
Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Found 3 at index: 3

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Found 42 at index: 2

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [42]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [-1]
Value checked array[9] = [9]
Found 999 at index: -1
```

### Task 1: Binary Search

Write a function that searches for a value in a sorted array of integers using the Binary search algorithm.

**Prototype**: `int binary_search(int *array, size_t size, int value);`

- `array`: a pointer to the first element of the array to search in
- `size`: the number of elements in the array
- `value`: the value to search for

Your function must return the index where `value` is located. You can assume that the array will be sorted in ascending order, and that `value` won’t appear more than once in the array. If `value` is not present in the array or if `array` is NULL, your function must return -1. You must print the array being searched every time it changes.

Example:

```c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}
```

Example output:

```bash
Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 0, 1, 2, 3
Searching in array: 2, 3
Found 2 at index: 2

Searching in array: 0, 1, 2, 3, 4
Searching in array: 3, 4
Searching in array: 4
Found 5 at index: -1

Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array:

 5, 6, 7, 8, 9
Searching in array: 8, 9
Searching in array: 9
Found 999 at index: -1
```

### Task 2: Big O #0

What is the time complexity (worst case) of a linear search in an array of size n?

**Repo:**

GitHub repository: [alx-low_level_programming](https://github.com/your-github-username/alx-low_level_programming)

Directory: 0x1E-search_algorithms

File: 2-O

### Task 3: Big O #1

What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

### Task 4: Big O #2

What is the time complexity (worst case) of a binary search in an array of size n?

### Task 5: Big O #3

What is the space complexity (worst case) of a binary search in an array of size n?

### Task 6: Big O #4

What is the space complexity of this function / algorithm?

```c
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

## Copyright

Copyright © 2023 ALX, All rights reserved.
