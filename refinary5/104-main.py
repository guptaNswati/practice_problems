#!/usr/bin/python3
rotate_left_list = __import__('104-rotate_left_list').rotate_left_list

my_list = [1, 2, 3, 4, 5]
number_rotation = 3
new_list = rotate_left_list(my_list, number_rotation)
print(new_list)
print(my_list)
