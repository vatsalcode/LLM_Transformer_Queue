# Enter your code here. Read input from STDIN. Print output to STDOUT
print reduce(lambda x, y: x+y, map(lambda x: str(x+1), range(int(input()))))
