#include <iostream>
using namespace std;
 
int main(){
    int n, a[106], i, cntc = 0, cntn = 0;
    cin >> n;
    for (i = 0; i < n; i ++) 
        cin >> a[i];
    for (i = 0; i < n; i ++) {
        if (a[i] % 2 != 0) {
            cout << a[i] << " ";
            cntn ++;
        }
    }
    cout << "\n";
    for (i = 0; i < n; i ++) {
        if(a[i] % 2 == 0) {
            cout << a[i] << " ";
            cntc ++;
        }
    }
    cout << "\n";
    if(cntc >= cntn)
        cout << "YES";
    if(cntc < cntn)
        cout << "NO";
}
