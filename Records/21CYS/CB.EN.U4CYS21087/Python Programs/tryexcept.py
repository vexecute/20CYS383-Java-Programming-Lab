
try:
    print('x','=',x)
except:
    print("x is not defined")
    
x = "hello"
if not type(x) is int:
    raise NameError("Only integers are allowed")