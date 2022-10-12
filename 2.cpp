#include <iostream>
using namespace std;
 
int main() {
    int n, s = 0, i;
    cin >> n;
    if (n == 0){
        cout << 1;
        return 0;
    }
    if (n > 0) {
        for(i = 1; i <= n; i ++) 
            s += i;
    }  
    if (n < 0) {
          for(i = 1; i >= n; i --) 
              s += i;
    }
    cout << s;
}
