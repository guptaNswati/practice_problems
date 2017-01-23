#!/usr/bin/python3
def print_diagonal(n):
    if n < 1:
        print()
        print()
    else:
        for i in range(n):
            for j in range(i):
                print(" ", end="")
            print("\\")
