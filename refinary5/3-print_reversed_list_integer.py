#!/usr/bin/python3
def print_reversed_list_integer(my_list=[]):
    if not my_list:
        return
    n = len(my_list) - 1
    while n >= 0:
        print("{:d}".format(my_list[n]))
        n -= 1
