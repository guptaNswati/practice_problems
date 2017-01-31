#!/usr/bin/python3
"""
recursive solution of nqueen problem: checking each col of each row recursively
"""
def place_queens(rw,N,sol):
    if rw == N:
        print(sol)
        return
    for col in range(N):
        if check_valid(rw, col, sol):
            sol[rw] = col
            place_queens(rw + 1, N, sol)

def check_valid(rw, col, sol):
    for i in range(rw):
        if sol[i] == col:
            return False
        if abs(sol[i] - col) == rw - i:
            return False
    return True


if __name__ == "__main__":
    N = 4
    place_queens(0,N, [0 for i in range(N)])
