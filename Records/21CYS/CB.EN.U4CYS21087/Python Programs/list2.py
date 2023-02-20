ls=[]
n=int(input("enter the number of elements in list: "))
for i in range(0,n):
    print("enter the element",i,":",end=" ")
    e=int(input())
    ls.append(e)
print(ls)