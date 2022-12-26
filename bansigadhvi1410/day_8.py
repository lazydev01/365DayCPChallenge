"""
     https://www.codechef.com/problems/CHEFSOCK

"""


jacketCost,sockCost,money=map(int,input().split())
money=money-jacketCost
socks=money//sockCost
if socks%2==0:
    print("Lucky Chef")
else:
    print("Unlucky Chef")