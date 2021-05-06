#With reference to Text.csv
import os.path
fi = input("Enter the file name:\n")
if os.path.isfile(fi):
    with open(fi, "r") as o:
        print(o.read())     # close() is not needed
    with open(fi, "a") as ob:
        ob.write("\n"+input("Add another line to add to the file:"))
    with open(fi, "r") as obj:
        print(obj.read())
else:
    print(f"File {fi} does not exist.")
