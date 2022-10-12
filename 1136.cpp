#include <iostream>
using namespace std;
 
int main() {
int x;
  cin >> x;
  int Max = x;
  while (x)
  {
    Max = max(Max,x);
    cin >> x;    
  }
  cout << Max;
}
