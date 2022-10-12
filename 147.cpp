#include <bits/stdc++.h>
using namespace std;
 
int Fib(int k) {
 if (k==0) return k;
 else if (k==1) return k;
      else return Fib(k-1)+Fib(k-2);
}
 
int main() {
  int n;
  cin >> n;
  cout << Fib(n);
}
