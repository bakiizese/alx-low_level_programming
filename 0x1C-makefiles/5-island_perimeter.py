#!/usr/bin/python3
'''returs perimeter'''


def island_perimeter(grid):
    ad = 0
    tr = 0
    perimeter = 0
    count = 0
    maxc = 0

    for i in grid:
        for j in i:
            if 1 in i:
                ad = 1
            else:
                ad = 0
            if 1 == j:
                tr += 1
        if tr > maxc:
            maxc = tr
        tr = 0
        count += ad
    perimeter = maxc + maxc + count + count

    return perimeter
