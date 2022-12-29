"""

    https://www.codechef.com/problems/SEGM01

"""

t=int(input())
for _ in range(t):
    s=input()
    count=0
    flag=False
    for i in range(len(s)):
        if s[i]=="1":
            flag=True
        else:
            if flag:
                count+=1 
            flag=False
       # print(flag)
    if s[len(s)-1]=="1":
        count+=1
    #print(count)
    if count!=1:
        print("NO")
    else:
        print("YES")
        
            
    