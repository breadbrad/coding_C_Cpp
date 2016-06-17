def factorial (n):
	if not isinstance(n, int):
		print 'Facotorial is only defined for integers'
		return None
	elif n < 0:
		print 'Facotorial is not defined for negative integers.'
		return None 
	elif n == 0:
		return 1
	else:
		return n * factorial(n-1)



def factorial (n):
	space = ' ' * (4 * n)
	print space, 'factorial', n
	if n == 0:
		print space, 'returninig 1'
		return 1
	else:
		recurse = factorial(n-1)
		result = n * recurse
		print space, 'returninig', result
		return result 

		