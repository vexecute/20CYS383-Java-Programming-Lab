def add_binary(a, b):
    a_int = int(a, 2)
    b_int = int(b, 2)

    c_int = a_int + b_int

    return bin(c_int)[2:]

result = add_binary('1010', '1011')
print(result)

def add_binary(a, b):

    a_int = int(a, 2)
    b_int = int(b, 2)

    c_int = a_int + b_int

    return str(c_int)

result = add_binary('1010', '1011')
print(result)