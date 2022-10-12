#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int a [3], b [3];
    cin >> a [0] >> a [1] >> a [2] >> b [0] >> b [1] >> b [2];
    sort (a, a + 3);
    sort (b, b + 3);
    cout << a [0] * b [0] + a [1] * b [1] + a [2] * b [2];
}
