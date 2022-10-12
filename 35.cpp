#include <iostream>
 
using namespace std;
 
int main()
{
      int k, n, m, d;
      cin >> k;
      for (int i = 0; i < k; ++i){
        cin >> n >> m;
        d = 19 * m + (n + 239)*(n + 366) / 2;
        cout << d << "\n";
    }
}
