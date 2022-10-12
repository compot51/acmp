#include <bits/stdc++.h>
using namespace std;
  
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) cin >> a[i];
    int k; 
    cin >> k;
    k%=n;
    k=(k+n)%n;
    k=(n-k)%n;
    for (int i=k; i<k+n; i++) cout << a[i%n] << " ";
}
