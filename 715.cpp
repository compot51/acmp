#include <bits/stdc++.h>
using namespace std;
 
int h, w, i, j, res=0;
string a[100];
char c;
 
int main() {
    cin >> h >> w;
    for (i=0; i<h; i++) cin >> a[i];
    for (i=0; i<h; i++)
    for (j=0; j<w; j++) {
        cin >> c;
        if (a[i][j]==c) res++;
    }
    cout << res;
    return 0;
}
