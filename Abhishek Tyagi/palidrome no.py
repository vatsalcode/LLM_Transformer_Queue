

def palindrome(n):
    temp = n
    sum = 0
    remainder = 0
    while n > 0:
        remainder = n % 10
        sum = sum * 10 + remainder
        n = n // 10
    if sum == temp:
        print (temp, 'is a palindrome')
    else:
        print (temp, 'is not a palindrome')
if __name__ == '__main__':        
    n = eval(input('Enter No '))
    palindrome(n)


