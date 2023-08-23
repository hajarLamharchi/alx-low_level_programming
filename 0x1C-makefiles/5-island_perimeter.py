#!/usr/bin/python3
"""This module defines the function island_perimeter"""


def island_perimeter(grid):
    """This function returns the perimeter of an island described in grid"""
    row = len(grid)
    col = len(grid[0])
    per = 0
    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                per += 4
                if (i > 0 and grid[i - 1][j] == 1):
                    per -= 2
                if (j > 0 and grid[i][j - 1] == 1):
                    per -= 2

    return per
