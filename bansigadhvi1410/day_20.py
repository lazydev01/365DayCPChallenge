t=int(input())
for _ in range(t):
    x,y, k=map (int,input().split())
    total games=x+y
    turn=total games%k
    if turn%2==0:
        print("chef")
    else:
        print ("paja")
