#include <iostream>
using namespace std;
 
char n, m, k;
 
int digit(char x) {
    if (x=='0') return 1;
    else if (x=='1') return 1;
    else if (x=='2') return 1;
    else if (x=='3') return 1;
    else if (x=='4') return 1;
    else if (x=='5') return 1;
    else if (x=='6') return 1;
    else if (x=='7') return 1;
    else if (x=='8') return 1;
    else if (x=='9') return 1;
    else return 0;
}
 
int main() {
    cin >> n >> m >> k;
    cout << digit(n) + digit(m) + digit(k);
}
