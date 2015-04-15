def fact (i):
	if i==0:
		return 1
	else:
		return i*fact(i-1)
s = raw_input()
n = [0]*26
for i,c in enumerate("abcdefghijklmnopqrstuvwxyz"):
	n[i]=s.count(c)
p=1
for i in range(26):
	p*=fact(n[i])
res = fact(len(s))/p
print res


