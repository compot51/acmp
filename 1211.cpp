#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
 
using namespace std;
 
ull m1, a, k, b, m, x, l=0, r;
 
bool trees(ull m) {
    if (x<=(m-(m/k))*a+(m-(m/m1))*b) return 1;
    else return 0;
}
 
int main() {
    cin >> a >> k >> b >> m1 >> x;
    r=1.0*x/(a*((k-1)/(1.0*k))+b*((m1-1)/(1.0*m1)))+k;
    while (l+1<r) {
        m=(l+r)/2;
        if (trees(m)) r=m;
        else l=m;
    }
    cout << r;
}
