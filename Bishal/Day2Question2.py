class Student:
    def __init__(self, age, height, weight, gender):
        self.age = age
        self.height = height
        self.weight = weight
        self.gender = gender

    @staticmethod
    def intro(first, sur):
        print(f"\n\nName: {first} {sur}")

    def  __str__(self) -> str:
        return f"Gender: {self.gender}\nAge: {self.age} years\nHeight: {self.height} feet\nWeight: {self.weight} kgs"


b = input("Enter first name: ")
m = input("Enter surname: ")
student = Student(float(input("Enter you Age: ")), float(input("Enter you Height: ")), float(input("Enter you Weight: ")), input("Enter you Gender: "))
Student.intro(b, m)
print(student)
