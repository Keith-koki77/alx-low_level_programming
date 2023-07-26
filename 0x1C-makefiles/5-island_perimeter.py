#!/usr/bin/python3

"""
Module that defines a function island_perimetr
"""

def island_perimeter(grid):
    """
    Function to claculate an island descibed in a grid perimeter
    grid is a list of list of integers
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    """

    if not grid:
        return 0

    rows = len(grid)
    cols = len(grid[0])

    perimeter = 0

    for row in range(rows):
        for col in range(cols):
             if grid[row][col] == 1:
                 perimeter += 4


                 if row > 0 and grid[row - 1][col] == 1:
                     perimeter -= 2
                 
                 if col > 0 and grid[row][col - 1] == 1:
                     perimeter -= 2


    return perimeter
