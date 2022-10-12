#include <iostream>
using namespace std;
 
int n, k=0;
 
int main() {
    cin >> n;
    while (n!=0) {
      if (n%2==1) k++;
      n/=2;
    }
    cout << k;
}
