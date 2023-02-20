
dict={}
print('empty dictionary')
dict['name']="hello"
dict['asa']="world"
print(dict)
print(dict['asa'])

dict1={1:'hi',2:'hello','dict2':{3:'bye',4:'see you'}}
print(dict1['dict2'][4])

string=input()
counts={}
for char in string:
    if char not in counts:
        counts[char]=1
    else:
        counts[char]+=1
print(counts)


name="hello"
class Person:
    def _init_(self, name, age):
        self.name = name 
        self.age = age


    def myfunc(self):
        print("Hello my name is " + self.name)
        class(name)
print("Person._doc:", Person.__doc__) 
print("Person.name:", Person.__name__) 
print("Person.module:", Person.__module__) 
print("Person.bases:", Person.__bases__) 
print("Person.dict:", Person.__dict__)
