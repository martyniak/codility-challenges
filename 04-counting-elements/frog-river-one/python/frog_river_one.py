
def solution(X, A):
    road = set()

    for time, leaf in enumerate(A):
        road.add(leaf)

        if len(road) == X:
            return time
    else:
        return -1
