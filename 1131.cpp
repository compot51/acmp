#include <bits/stdc++.h>
using namespace std;
int N;
double a, b, c, d;
double f(double x) {
    return ((a*x+b)*x+c)*x+d;
}
 
int sgn(double x) {
    if (x>0) return 1;
    if (x<0) return -1;
    return 0;
}
 
int main() {
    cin >> a >> b >> c >> d;
    int fl=sgn(f(-1001));
    for (double x=-10000.999;x<=1001;x+=0.001) {
        if (fl!=sgn(f(x))) {
            cout << x;
            return 0;
        }
    }
}
