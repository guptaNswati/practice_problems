#!/usr/bin/python3
def matrix_mul(a, b):
    if not a:
        print("a not valid")
        return
    if not b:
        print("b is not valid")
        return
    if not isinstance(a, list):
        print("a not valid")
        return
    if not isinstance(b, list):
        print("b not valid")
        return
    if not isinstance(a[0], list):
        print("a not valid")
        return
    if not isinstance(b[0], list):
        print("b not valid")
        return
    # length of columns of a should be equal to length of row of b
    if not len(a[0]) == len(b):
        print("a and b not valid")
        return
    # length of all columns should be same in both a and b
    for i in range(1, len(a)):
        if not len(a[0]) == len(a[i]):
            print("a not valid")
            return
    for i in range(1, len(b)):
        if not len(b[0]) == len(b[i]):
            print("b not valid")
            return
    d = []
    for i in range(len(a)):
        c = []
        for j in range(len(b[0])):
            sum = 0
            for k in range(len(b)):
                sum += a[i][k] * b[k][j]
            c.append(sum)
        d.append(c)
    return d
