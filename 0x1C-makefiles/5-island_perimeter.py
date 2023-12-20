#!/usr/bin/python3
"""
   the Interview preparation
"""


def island_perimeter(grid):
    """
    Returns perimeter of island of grid.

    Args:
        grid (int): The island grid.

    Returns:
        int: perimeter of island.
    """
    i_per = 0
    for rows in range(len(grid)):
        for colu in range(len(grid[0])):
            if grid[rows][colu] == 1:
                i_per += 4
                if rows > 0 and grid[rows - 1][colu] == 1:
                    i_per -= 2
                if colu > 0 and grid[rows][colu - 1] == 1:
                    i_per -= 2
    return (i_per)
