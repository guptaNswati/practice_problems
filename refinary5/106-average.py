#!/usr/bin/python3
def average(my_list=[]):
    averg = 0
    if my_list:
        for i in range(len(my_list)):
            averg += my_list[i]
        averg = averg / len(my_list)
    return averg
