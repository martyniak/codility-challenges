
def solution(N):
    strN = str(bin(N))

    max = gap = 0
    for char in strN[2:]:
        if char == "1":
            if gap > max:
                max = gap
            gap = 0
        else:
            gap += 1

    return max


if __name__ == "__main__":
    print(solution(32))
