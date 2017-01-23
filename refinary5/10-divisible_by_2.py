#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    nl = []
    if my_list:
        for i in range(len(my_list)):
            if i % 2 == 0:
                nl.append(True)
            else:
                nl.append(False)
    return nl
