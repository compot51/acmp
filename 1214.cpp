#include <iostream>
using namespace std;
 
int n, x, a, c=0;
 
int main() {
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    cin >> x;
    for (int i=0; i<n; i++) {
        if (a[i]==x) c++;
    }
    cout << c;
}
