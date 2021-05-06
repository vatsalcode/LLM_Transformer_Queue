rows = 5
LastEvenNumber = 2 * rows
evenNumber = LastEvenNumber
for i in range(1, rows+1):
    evenNumber = LastEvenNumber
    for j in range(i):
        print(evenNumber, end=' ')
        evenNumber -= 2
    print("\r")
