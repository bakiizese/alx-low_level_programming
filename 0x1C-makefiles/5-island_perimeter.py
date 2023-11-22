#!/usr/bin/python3

def island_perimeter(grid):
    ad = 0;
    tr = 0;
    count = 0;
    maxc = 0;
    for i in grid:
        for j in i:
            if 1 in i:
                ad = 1;
            else:
                ad = 0;
            if 1 == j:
                tr += 1;
            print(j)
        print("$")
        print(ad)
        if tr > maxc:
            maxc = tr;
        tr = 0;
        count += ad;
        print("--")
    print("#")
    print(maxc)
    return count
