a=int(input("Enter the first number:"))
b=int(input("Enter the second number:"))
if(a>b):
    l=a
else:
    l=b
while(1):
    if(l%a==0 and l%b==0):
        print("LCM is:",l)
        break
    l=l+1
