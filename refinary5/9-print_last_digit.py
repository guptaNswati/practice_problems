#!/usr/bin/python3
def print_last_digit(number):
    flag = 0
    if number < 0:
        number *= -1
        flag = 1
    last = number % 10
    if flag == 1:
        number *= -1
    print("{:d}".format(last), end="")
    return last
