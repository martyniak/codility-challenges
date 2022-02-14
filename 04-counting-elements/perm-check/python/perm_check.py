
def solution(A):
    set_sum = sum(set(A))

    N = len(A)
    exp_sum = N * (N + 1) / 2

    if set_sum == exp_sum:
        return 1
    else:
        return 0
