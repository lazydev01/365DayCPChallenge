# cook your dish here
t=int(input())
for _ in range(t):
    n=int(input())
    p=list(map(int,input().split()))
    d={}
    happy=True
    for i in range(len(p)):
        d[p[i]]=0
    for j in range(len(p)):
        d[p[j]]+=1
    for k in (d):
        # print(k)
        # print(d[k])
        if d[k]%k!=0:
            happy=False
            break
    if happy==True:
        print("yes")
    else:
        print("no")
    