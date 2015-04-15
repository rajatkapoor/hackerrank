t = input()
while t is not 0 :
	s = input()
	l = 4
	for i in range(s):
		l = l+2**(i+1)
	print l%(10**9+7)
	t=t-1