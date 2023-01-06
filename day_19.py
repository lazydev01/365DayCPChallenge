t=int(input())
for _ in range(t):
    n,w=map(int, input ().split())
    a=list (map(int,input().split()))
    a.sort(reverse=True)
    Sum=0
    temp=0
    for i in range(n):
        sum+=a[i]
        if sum>=w:
        temp=i
        break
    print(n-i-1)
