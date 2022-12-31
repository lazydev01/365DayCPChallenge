"""

   Question--> https://www.codechef.com/problems/DOMINANT2

"""


t=int(input())
for _ in range(t):
    n=int(input())
    d={}
    a=list(map(int,input().split()))
    for i in range(len(a)):
        d[a[i]]=0
    for j in range(len(a)):
        d[a[j]]+=1 
    if len(d)==1:
        print("yes")
    else:
        sorted_d = sorted(d.items(), key=lambda x:x[1])
        last_d=sorted_d[len(sorted_d)-1][1]
        second_last_d=sorted_d[len(sorted_d)-2][1]
        if last_d==second_last_d:
            print("no")
        else:
            print("yes")
            
        
            
        
        