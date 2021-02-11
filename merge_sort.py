import math


def conquer(x, p, q, r):
    """defines the conquer part of the algorithm"""
    
    n1, n2 = q - p + 1, r - q
    L, R = [], []

    for i in range(n1):
        L.append(x[p + i])

    for j in range(n2):
        R.append(x[q + 1 + j])

    i, j = 0, 0
    L.append(math.inf)
    R.append(math.inf)

    for k in range(p, r + 1):
        if L[i] <= R[j]:
            x[k] = L[i]
            i += 1
        else:
            x[k] = R[j]
            j += 1


def merge(x, p, r):
    """handles both the divide part of the algorithm
    and calls the conquer part"""

    if p < r:
        q = math.floor((p + r)/2)

        merge(x, p, q)
        merge(x, q + 1, r)
        conquer(x, p, q, r)


def merge_sort(x):
    """sorts the given list using merge sort algorithm
    and returns the sorted list"""

    p, r = 0, len(x) - 1

    merge(x, p, r)

    return x


