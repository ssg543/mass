a=int(input("enter the number:"))
b=list(str(a))
c=len(b)
i=0
while c>0:
    if(int(b[i])%2==0):
        d=0
    else:
        print(b[i],end="")
    i=i+1    
              
        
    c=c-1
