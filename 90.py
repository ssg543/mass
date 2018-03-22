a = input("enter the value")
b = list(str(a))
c = len(a)
d = b
i=0
while c>0:
    d = b[i]
    if d in ("0","1","2","3","4","5","6","7","8","9"):
    c=c-1
    i=i+1
print(d)
