
a=input("\nEnter the string:")
b=int(input("\nEnter the number:"))
f=b
c=list(str(a))
d=len(c)
while f>0:
    print(c[d-b],end='')
    b=b-1
    f=f-1


