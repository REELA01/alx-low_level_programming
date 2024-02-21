#!/usr/bin/python3
"""define island perimeter"""


def island_perimeter(grid):
    """return the perimiter of island"""
    width = len(grid[0])
    height = len(grid)
    edg = 0
    s = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                s += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edg += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edg += 1
    return s * 4 - edg * 2
