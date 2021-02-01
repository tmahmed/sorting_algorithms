def insertion_sort(x):
    for i in range(1, len(x)):
        key = x[i]
        ins_pos = i

        while ins_pos > 0 and x[ins_pos - 1] > key:
            x[ins_pos] = x[ins_pos - 1]
            ins_pos -= 1

        x[ins_pos] = key

    #print(*x)

#insertion_sort([5, 4, 3, 2, 1])
