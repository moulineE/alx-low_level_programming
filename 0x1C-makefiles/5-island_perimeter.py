#!/usr/bin/python3
"""
This module defined a function island_perimeter that returns
the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid"""
    height = len(grid) - 1
    width = len(grid[0]) - 1
    perimeter = 0
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if i == height or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == width or grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
