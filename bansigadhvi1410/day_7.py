""" 

    https://www.codechef.com/problems/CHEFSTEP

"""

t=int(input())
for _ in range(t):
    n,k=map(int,input().split())
    s=""
    a=list(map(int,input().split()))
    for i in range(len(a)):
        if a[i]%k==0:
            s+="1"
        else:
            s+="0"
    print(s)