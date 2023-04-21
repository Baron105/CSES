n = int(input())
a = list(map(int, input().split()))
ans = 0
d = {}
j = 0
for i in range(n):
    while j < n and a[j] not in d:
        d[a[j]] = j
        j += 1
    ans = max(ans, j - i)
    del d[a[i]]
print(ans)
