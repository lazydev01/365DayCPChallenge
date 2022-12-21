t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    a.sort()
    count=0
    for i in range(0,len(a)):
        if a[i]<=i+1:
            count=count+((i+1)-a[i])
        else:
            count=-1
            break
    print(count)