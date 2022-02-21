
def solution(A):
    east = 0
    pairs = 0

    for x in A:
        if x == 0:
            east += 1

        if x == 1:
            pairs += east

        if pairs > 1000000000:
            return -1

    return pairs
