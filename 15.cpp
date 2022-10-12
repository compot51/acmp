#include <bits/stdc++.h>
using namespace std;
  
int main() {
    int n, j=0, sum=0;
    cin >> n;
    for (int i=0; i<n*n; i++) {
        cin >> j;
        sum += j;
    }
    cout << sum/2;
}
