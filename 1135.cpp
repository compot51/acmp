#include <iostream>
using namespace std;
 
int main() {
int x, count = 0;
  cin >> x;
  while (x)
  {
    if (!(x & 1))
      count++;
    cin >> x;
  }
  cout << count;
}
