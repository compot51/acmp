a=[]
for i in range(100):
    a.append([0]*900)
a[0][0]=1
r=0
n=int(input())
n//=2;
for i in range(1,n+1):
    a[i][0]=1
    for s in range (1,n*9+1):
        for j in range (0,10):
            if(s-j<0):
                break
            a[i][s]+=a[i - 1][s-j]
for i in range(0,n*9+1):
    r+=a[n][i]*a[n][i]
print(r)
