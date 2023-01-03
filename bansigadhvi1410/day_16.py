t=int (input () )
for in range(t):
    n, k, v=map (int, input ( ). split())
    a=list (map(int, input ().split ()))
    S=V* (n+k)-sum(a)
    if s%k==0 and s>0:
        print (s//k)
    else:
        print(-1)
