class Student:
    def __init__(self, age, height, weight, gender):
        self.age = age
        self.height = height
        self.weight = weight
        self.gender = gender

    @staticmethod
    def intro(first, sur):
        print(f"\n\nName: {first} {sur}")


b = input("Enter first name: ")
m = input("Enter surname: ")
specifications = Student(input("Enter Age(years): "), input("Enter Height(feet): "), input("Enter Weight(kgs): "), input("Enter Gender: "))
specifications.intro(b, m)
print(f"Gender: {specifications.gender} ")
print(f"Age: {specifications.age} years")
print(f"Height: {specifications.height} feet")
print(f"Weight: {specifications.weight} kgs")
