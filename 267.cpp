#include <iostream>
using namespace std;
 
long long t1, t2 , N;
 
long long num(long long t) {
    if (t<t1) return 0;
    return 1+(t-t1)/t1+(t-t1)/t2;
}
 
int main() {
    cin >> N >> t1 >> t2;
    if (t1>t2) swap(t1,t2);
    long long l=0, r=2e9, m;
    while (l+1<r){
        m=(l+r)/2;
        if (num(m)<N) l=m;
        else r=m;
    }
    cout << r;
}
