dp = dict()

def getWays(n, i):
    if (n, i) in dp:
        return dp[(n, i)]

    if n == 0:
        return 1
    if n < 0 or i == M:
        return 0

    mm = (n // l[i]) + 1
    nn = 0
    for j in range(mm):
        nn += getWays(n - l[i] * j, i + 1)
    dp[(n, i)] = nn

    return nn


N, M = [int(i) for i in input().split()]
l = [int(i) for i in input().split()]

print(getWays(N, 0))
