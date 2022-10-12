#include <bits/stdc++.h>
#define ll long long
using namespace std;
  
int main() {
    ll n;
    cin >> n;
    n /= 10;
    cout << (n + 1) * n * 100 + 25;
}
