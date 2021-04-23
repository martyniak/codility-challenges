
def solution(A):
    N = len(A)
    result = int(((N + 1) * ((N + 1) + 1)) / 2)

    for val in A:
        result -= val

    return result
