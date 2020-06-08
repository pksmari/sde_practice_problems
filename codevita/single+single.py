for t in range(int(input())):
  s=list(input())
  s1=set(s)
  c=False
  for i in list(s1):
    if s.count(i)>1:
      c=True
      break
  if c:
    print("Yes")
  else:
    print("No")
