class eval_equations: 

	def __init__(self, a): 
		self.ans = a 

	@classmethod
	def eq1(cls, args): 
		
		x = cls((args[0]*args[0])+(args[1]*args[1])-args[2]) 
		return x 

	@classmethod
	def eq2(cls, args): 
		y = cls((args[0]*args[0])-(args[1]*args[1])) 
		return y 

	@classmethod
	def eq3(cls, args): 
		temp = 0

		for i in range(0, len(args)): 
			temp += args[i]*args[i] 

		temp = temp/max(args) 
		z = cls(temp) 
		return z 


li = [[1, 2], [1, 2, 3], [1, 2, 3, 4, 5]] 
i = 0

while i < 3: 

	inp = li[i] 

	if len(inp) == 2: 
		p = eval_equations.eq2(inp) 
		print("equation 2 :", p.ans) 

	elif len(inp) == 3: 
		p = eval_equations.eq1(inp) 
		print("equation 1 :", p.ans) 

	else: 
		p = eval_equations.eq3(inp) 
		print("equation 3 :", p.ans) 

	#increment loop		 
	i += 1
