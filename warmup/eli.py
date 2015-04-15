
# def f(p):
#   s = 0
#   for i,pi in enumerate(p):
#       s+=abs(pi-i-1)
#   return s
# for i in range(t):
#   n = input()
#   a = [(i+1) for i in range(n)]
#   p = itertools.permutations(a)
#   ss = 0
#   while True:
#       try:
#           ss+=f(p.next())
#       except:
#           break
#   print ss
t = input()
import math
def diffSum(p,k):
    return sum([abs(i-k) for i in p])
for i in range(t):
    n = input()
    a = [(i+1) for i in range(n)]
    ss = 0
    for i in range(1,n+1):
        ss+= diffSum(a,i)
    print (math.factorial(n-1)*ss)%(1000000007)


    