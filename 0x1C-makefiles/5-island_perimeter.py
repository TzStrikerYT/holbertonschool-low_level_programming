#!/usr/bin/python3
""" modules for method """


def island_perimeter(grid):
    """ Method to caclc the perimeter """
    perimeter = 0

    for y, r in enumerate(grid):
        for x, c in enumerate(r):
            if c == 1:
                if y == 0 or grid[y + 1][x] == 0:
                    perimeter += 1
                if x == 0 or grid[y][x - 1] == 0:
                    perimeter += 1
                if  y == len(grid) - 1 or grid[y + 1][x] == 0:
                    perimeter +=1
                if  x== len(grid) - 1 or grid[y][x + 1] == 0:
                    perimeter += 1
    return perimeter
