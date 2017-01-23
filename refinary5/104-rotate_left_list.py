#!/usr/bin/python3
def rotate_left_list(my_list=[], number_rotation=0):
    if number_rotation == 0:
        return my_list
    nl = []
    for i in range(len(my_list)):
        nl.append(my_list[number_rotation:number_rotation + 1])
    return nl
