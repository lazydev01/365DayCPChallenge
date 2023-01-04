t=int(input())
for _ in range(t):
    n, k, v=map (int, input ( ). split())
    a=list (map(int, input ().split ()))
    s=v*(n+k)-sum(a)
    if s%k==0 and s>0:
        print (s//k)
    else:
        print(-1)
