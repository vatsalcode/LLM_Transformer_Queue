diction = {}
for i in range(int(input("Enter for how many students do you wanna enter the details: "))):
    n, o, p, q = input(f"Enter the name of Student {i+1} and then the marks of the 3 subjects by giving a space:\n").split()
    ll = [float(o), float(p), float(q)]
    diction[n.upper()] = ll
name_request = input("Enter the name of the student for whom you wanna calculate the aggregate:\n")
for i, j in diction.items():
    if i == name_request.upper():
        avg = 0
        for k in j:
            avg += k
        avg /= 3
        avg = "{:.2f}".format(avg)
        print(avg)
