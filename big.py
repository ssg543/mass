a=int(input())
c=[]
g=0
for i in range(a):
    b=input()
    c.append(b)
    for i in range(len(c)):
        for j in range(i+1,len(c)):
            if(c[i]<c[j]):
                d=c[i]
                c[i]=c[j]
                c[j]=d
print("".join(c))
if(int(c[i])&int(c[j])==g):
               print(g)
