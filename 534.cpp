#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n, k, p;
    cin >> n;
    int a [n], b [n];
    for (int i = 0; i < n; i ++) {
        cin >> a [i];
        b [i] = 0;
    }
    cin >> k;
    for (int i = 0; i < k; i ++) {
        cin >> p;
        b [p - 1] ++;
    }
    for (int i = 0; i < n; i ++) {
        if (b [i] > a [i])
            cout << "yes\n";
        else
            cout << "no\n";
    }
}
