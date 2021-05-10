class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age

  def myfunc(self):
    print("Hello my name is " + self.name)

p1 = Person("Samriddha Basu", 10)

p1.age = 18

print(p1.age)
