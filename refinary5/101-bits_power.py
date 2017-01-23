#!/usr/bin/python3
def bits_power(n=0):
    nl = []
    if n >= 0:
        for i in range(n):
            nl.append(2**i)
    return nl
