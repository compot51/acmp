#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    if (n<10) {
        cout << n;
        return 0;
    }
    if (n==10) {
            cout << 0;
            return 0;
    }
    while (n>10) n%=10;
    cout << n;
}
