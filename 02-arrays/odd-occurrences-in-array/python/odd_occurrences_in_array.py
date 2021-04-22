
def solution(A):
    result = 0
    for val in A:
        result ^= val
    return result


if __name__ == "__main__":
    print(solution([9, 3, 9, 3, 9, 7, 9]))
