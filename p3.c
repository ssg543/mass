n=int(input("enter the number:"))
rev=0
while n>0
    c=n%10
    rev=rev*10+c
    n=n/10
print("reversal is:",rev)
