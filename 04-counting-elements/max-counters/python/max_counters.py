
def solution(N, A):
    maxCounter = prevMaxCounter = 0
    result = [0] * N

    for val in A:
        if 1 <= val and val <= N:
            result[val - 1] += 1
            if maxCounter < result[val - 1]:
                prevMaxCounter = maxCounter
                maxCounter = result[val - 1]
        else:
            if val == N + 1 and maxCounter != prevMaxCounter:
                result = [maxCounter] * N

    return result
