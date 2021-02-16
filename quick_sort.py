def find_pivot_pos(x, p, r):
    """finds the final position of the pivot"""
    pivot_pos, pivot, i = r, x[r], p - 1

    for j in range(p, r):
        if x[j] <= pivot:
            i += 1
            x[i], x[j] = x[j], x[i]

    x[i + 1], x[r] = x[r], x[i + 1]

    return i + 1


def partition(x, p, r):
    """divides the list into two separate partitions
    and sorts them"""
    if p < r:
        q = find_pivot_pos(x, p, r)
        partition(x, p, q - 1)
        partition(x, q + 1, r)


def quick_sort(x):
    """sorts a list in ascending order
    using the quick sort algorithm"""

    p, r = 0, len(x) - 1

    partition(x, p, r)

    return x


#print(quick_sort([2, 8, 7, 1, 3, 5, 6, 4]))
