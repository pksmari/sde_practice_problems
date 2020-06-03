for t in range(int(input())):
  n=int(input())
  x=[]
  y=[]
  for i in range(n):
    u,v=map(int,input().split())
    x.append(u)
    y.append(v)
  print(max(abs(max(x)-min(x)),abs(max(y)-min(y)))**2)
