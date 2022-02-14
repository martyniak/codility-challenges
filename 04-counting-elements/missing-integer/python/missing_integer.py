
def solution(A):
    A = sorted(A)

    smallest = 1

    for x in A:
        if x == smallest:
            smallest += 1

    return smallest
