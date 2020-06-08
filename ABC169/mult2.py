n=int(input())
A=[int(i) for i in input().split()]
A.sort()
prod=1
for i in range(0,n):
  prod=prod*A[i]
  #print(prod)
  if(prod==0):
      break
  if(prod>1000000000000000000):
    prod=-1
    break
print(prod)
