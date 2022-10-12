#include <bits/stdc++.h>
using namespace std;
unsigned long long l1,n,l=0,r,m,a,b,h,w;
int main() {
cin>>n>>a>>b>>w>>h; r=max(w,h);
while (l+1<r) {
m=(l+r)/2;
if (h/(b+2*m)==0) r=m;
else if (w/(a+2*m)>=1.0*n/(h/(b+2*m))) l=m;
else r=m;
} swap(h,w); r=max(h,w); l1=0;
while (l1+1<r) {
m=(l1+r)/2;
if (h/(b+2*m)==0) r=m;
else if (w/(a+2*m)>=1.0*n/(h/(b+2*m))) l1=m;
else r=m;
}
cout << max(l1,l);
return 0;
}
