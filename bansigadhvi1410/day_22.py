"""

https://www.codechef.com/problems/ARRAYRET

"""

t=int(input())
for _ in range(t):
    n = int(input())
    b = list(map(int, input().split()))
    sum_b = sum(b)
    a = []
    sum_a = sum_b//(n+1)
    for i in range(len(b)):
        a.append(b[i]-sum_a)
    print(*a)
