def nqueens(n):
    #This version generates all possible solns
    seen = set()
    for c in range(n):
        Q = [None] * n
        attempt = dfs(0, c, Q)
        if attempt:
            res = ''
            for val in Q:
                res += str(val)
            seen.add(res)
    print ("all solns generated number of distinct solns = ", len(seen), seen)
    return len(seen)


def dfs(r, c, Q):
    opts = [x for x in range(len(Q)) if x != c]
    opts.append(c)
    while opts:
        c = opts.pop()
        if is_soln(r, c, Q):
            return True
        elif is_valid(r, c, Q):
            emplaceQ(r, c, Q)
            dive = dfs(r + 1, c, Q)
            if dive:
                return True
            else:
                removeQ(r, c, Q)
    return False


def emplaceQ(r, c, Q):
    Q[r] = c


def removeQ(r, c, Q):
    Q[r] = None


def is_valid(r, c, Q):
    row, col = r, c
    for i in range(row):
        if col == Q[i] or (row - col) == (i - Q[i]) or\
           (row + col) == (i + Q[i]):
                return False
    return True


def is_soln(r, c, Q):
    row, n = r, len(Q)
    if (row == n - 1) and is_valid(r, c, Q):
        emplaceQ(r, c, Q)
        return True
    return False
