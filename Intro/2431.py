def pow(x):
    res = 1
    for i in range(x):
        res *= 10
    return res

def query(N):
    if N < 9:
        return N+1
    
    len = 1
    while 9 * pow(len-1) * len < N:
        N -= 9 * pow(len-1) * len
        len += 1
    
    S = str(pow(len-1) + N//len)
    return int(S[N%len])

for q in range(int(input())):
    print(query(int(input())-1))