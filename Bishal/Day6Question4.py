#SAMPLE INPUT:
#Enter for how many students do you want to check:
#5
#Enter the name and average obtained by a particular student:
#Student 1:
#Harry
#37.21
#Student 2:
#Berry
#37.21
#Student 3:
#Tina
#37.2
#Student 4:
#Akriti
#41
#Student 5:
#Harsh
#39
#SAMPLE OUTPUT:
#Berry
#Harry
def second(n):
    scores = []
    students = []*n
    print("Enter the name and average obtained by a particular student:")
    for i in range(n):
        temp = []
        print(f"Student {i+1}:")
        name = input("Name: ")
        score = float(input("Score: "))
        temp.append(name)
        temp.append(score)
        scores.append(score)
        students.append(temp)
        print()
    scores.sort()
    t = [scores[0]]
    for i in range(1, n):
        c = 0
        for j in range(i):
            if scores[i] == scores[j]:
                c += 1
                break
        if c != 1:
            t.append((scores[i]))
    names = []
    for i in range(n):
        if t[1] != students[i][1]:
            continue
        else:
            names.append(students[i][0])
    names.sort()
    for i in names:
        print(i)


second(int(input("Enter for how many students do you want to check:\n")))
