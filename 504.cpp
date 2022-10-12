#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int i, m;
    char a, b, c, swaper;
    a='G';
    b='C';
    c='V';
    cin >> m;
    for (i=1;i<=m;i++) {
        swaper=c;
        c=b;
        b=a;
        a=swaper;
    }
    cout << a << b << c;
}
