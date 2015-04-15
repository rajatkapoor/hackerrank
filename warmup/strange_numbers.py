def isperfect(a):
	l = len(str(a))
	print "case"+str(a)
	if l is 1:
		print 'yeah',a
		return True
	elif l>1 and a%l==0:
		print "checking:"+str(a/l)
		isperfect(a/l)

t = input()
while t is not 0:
	s = raw_input().split(' ')
	a = int(s[0])
	b = int(s[1])
	c = 0
	for i in range(a,b+1):
		if isperfect(i):
			c=c+1
		print i,c
	t-=1

