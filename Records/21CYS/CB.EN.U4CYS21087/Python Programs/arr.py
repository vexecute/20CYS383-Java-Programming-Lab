
import array as arr
a=arr.array('i',[1,2,3])
print("the elements in the arrray are: ",end=" ")
for i in range(0,3):
    print(a[i],end=" ")
print()

import array
int_array = array.array('i', [])
print("Enter elemnts")
# using append()
for i in range(-1,5):
    int_array.append(int(input()))
for i in range(1,7):
    print(int_array[i-1], end=" ")

import array as ar
a=ar.array('i',[4,2,3])
a.reverse()
print(a)