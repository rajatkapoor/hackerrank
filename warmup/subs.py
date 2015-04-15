[n,k] = [int(i) for i in raw_input().split(' ')]
a = []
res,s = 0,0
for i in range(n):
	a.append(input())
a2 = [0]*k
a2[0]+=1
for i in range(n):
	s = (s+a[i])%k
	a2[s]+=1
for i in range(k):
	res+=(a2[i]*(a2[i]-1)/2)
print res