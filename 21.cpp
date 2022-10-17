#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int a, b, c, mn, mx;
    cin >> a >> b >> c;
    mn=min(min(a,b),c);
    mx=max(max(a,b),c);
    cout << mx-mn;
}
