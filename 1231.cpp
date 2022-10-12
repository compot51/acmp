#include <bits/stdc++.h>
using namespace std;
 
int a[1000000], n, cnt=0;
 
int bubble(int a[], int n) {
   int i, j;
   for (int i=0; i<n-1; i++)
       for (int j=0; j<n-i-1; j++)
           if (a[j]>a[j+1]) {
              swap(a[j], a[j+1]);
              cnt++;
              }
    return cnt;
}
 
int main() {
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    bubble(a, n);
    //for (int i=0; i<n; i++) cout << a[i] << " ";
    cout << cnt;
}
