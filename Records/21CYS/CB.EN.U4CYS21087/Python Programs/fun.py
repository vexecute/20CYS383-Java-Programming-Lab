def evenOdd( x ):
    if (x % 2 == 0):
        print("even")
    else:
        print("odd")

evenOdd(2)
evenOdd(3)
#---------------
x=int(input("enter a number: "))
def hello( x ):
    
    if (x % 2 == 0):
        print("even")
    else:
        print("odd")

hello(x)

def func(x,y='None'):
    print(x)
    print(y)
func(10)

def func():
    global s
    print(s)
    s="hi work"
    print(s)
s='hello work'
func()
print(s)

def f():
    city = "Hamburg"
    def g():
        global city
        city = "Geneva"
    print("Before calling g: " + city)
    print("Calling g now:")
    g()
    print("After calling g: " + city)
f()
print("Value of city in main: " + city)

