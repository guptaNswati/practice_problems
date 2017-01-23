#!/usr/bin/python3
def calc_arg(argv):
    n = len(argv)
    add = 0
    i = 1
    while i < n:
        add += int(argv[i])
        i += 1
    print("{:d}".format(add))


if __name__ == "__main__":
    import sys
    calc_arg(sys.argv)
