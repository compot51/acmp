#include <iostream>
#define ull unsigned long long
#define ll long long
using namespace std;
  
ull w, h , n, m;
  
ull num(ll t) {
    return (m/w)*(m/h);
}
  
int main() {
    cin >> w >> h >> n;
    ull l=0, r=1e18;
    while (l+1<r){
        m=(l+r)/2;
        if (num(m)<n) l=m;
        else r=m;
    }
    cout << r;
}
