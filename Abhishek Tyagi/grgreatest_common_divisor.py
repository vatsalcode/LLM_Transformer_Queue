def gcd(x, y):
	if x == 0:
		return y
	if y == 0:
		return x
	
	while x % y != 0:
		rem = x % y;
		x = y
		y = rem

	return y

def gcd(x, y):
	if x == 0:
		return y
	if y == 0:
		return x
	
	return gcd(y, x % y)

def gcd(x, y):
    while y != 0:
        x, y = y, x % y
    return x
