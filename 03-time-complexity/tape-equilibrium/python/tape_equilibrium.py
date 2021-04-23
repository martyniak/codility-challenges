import sys

def solution(A):
    min = sys.maxsize
    sum = temp = 0

    for val in A:
        sum += val

    for val in A:
        temp += val
        p = abs(sum - temp - temp)
        if (p < min):
            min = p

    return min
