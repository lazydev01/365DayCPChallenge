 """  
      https://www.codechef.com/problems/MSNSADM1

"""

t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    c=[]
    for i in range(n):
        goal=20*a[i]
        foul=10*b[i]
        c.append(goal-foul)
        if c[i]<0:
            c[i]=0
    print(max(c))