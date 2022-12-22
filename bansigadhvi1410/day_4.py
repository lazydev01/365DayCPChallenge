# cook your dish here
t=int(input())
for _ in range(t):
    n,m=map(int,input().split())
    a=list(map(int,input().split()))
    count=0
    for i in range(0,n):
        if abs(a[i]-1)>abs(a[i]-m):
            count+=abs(a[i]-1)
        else:
            count+=abs(a[i]-m)
    print(count)
            