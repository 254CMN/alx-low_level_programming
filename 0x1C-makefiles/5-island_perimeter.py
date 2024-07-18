#!/usr/bin/python3
"""A function  that returns the perimeter of the island described in grid"""


def island_perimeter(grid):

    """Returns the perimeter of an island"""

    rows = len(grid);
    columns = len(grid[0])
    cell = 0
    edg = 0
    
    for i in range(rows):
        for j in range(columns):
            if grid[i][j] == 1:
                cell += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edg += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edg += 1
    return ((cell * 4) - (edg * 2))

"""
cel_len = 4
    i = 0
    while i < columns:
        if grid[i] == 1:
            cel_len = cel_len + 2
        i += 1
Nilikua najaribu FR
    return cel_len

"""
