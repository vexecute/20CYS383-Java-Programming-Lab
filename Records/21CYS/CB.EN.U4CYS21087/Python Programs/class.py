class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age
p1 = Person("John", 36)
print(p1.name)
print(p1.age)

class emp:
    def __init__(self,first_name,last_name,salary):
        self.fname=first_name
        self.lname=last_name
        self.sal=salary
    
emp1=emp("hello","world",100000)
print(emp1.fname,emp1.lname)
print(emp1.sal)

class person:
    def __init__(self,fname,lname,sal,age):
        self.fname=fname
        self.lname=lname
        self.sal=sal
        self.age=age
p1=person('vinoth','hacker',99999,9)
p2=person('kishore','raja',2321231,123)
print(p1.fname,p1.lname,p1.sal,p1.age)
print(p2.fname,p2.lname,p2.sal,p2.age)


class person:
    def __init__(self,fname,lname):
        self.lname=lname
        self.fname=fname
person1=person('hello','world')
print(person1.fname,person1.lname,"!")