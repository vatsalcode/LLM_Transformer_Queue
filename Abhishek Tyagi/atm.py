x,y=map(float,input().split())

if(x+0.5>=y or x%5!=0 or y<=0):

	print("%.2f"%y)

else:
	y=y-x-0.50
  
	print("%.2f"%y)
