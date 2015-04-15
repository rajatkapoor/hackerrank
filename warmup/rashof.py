t = input()
while t!=0:
	[n,k] = [int(i) for i in raw_input().split(' ')]
	a = [[0]*n]*n
	b = [[0]*n]*n
	d = [0]*(n-1)
	so =0
	for j in range(n-1):
		[x,y,lo,ln]=[int(i) for i in raw_input().split(' ')]
		d[j] = lo-ln
		a[x-1][y-1] = lo
		b[x-1][y-1] = ln
		so+=lo
	d.sort()
	res = so+sum(d[0:k])
	print a
	t-=1
