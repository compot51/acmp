#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, a[100][100], b[101], k = 0;
    cin >> n;
    for (int i = 0; i < n * n; i ++)
        for (int j = 0; j < n * n; j ++)
            cin >> a[i][j];
    for (int i = 0; i < n * n; i ++)
        b[i] = 0;
    for (int i = 0; i < n * n; i ++) {
        for (int j = 0; j < n * n; j ++) {
            b[a[i][j]] += 1;
        }
        for (int i = 1; i <= n * n; i ++)
            if (b[i] == 0)
                k++;
        for (int i = 1; i <= n * n; i ++)
            b[i] = 0;
    }
    for (int j = 0; j < n * n; j ++) {
        for (int i = 0; i < n * n; i ++) {
            b[a[i][j]] += 1;
        }
        for (int j = 1; j <= n * n; j ++)
            if (b[j] == 0) {
                ++k;
            }
        for (int j = 1; j <= n * n; j ++)
            b[j] = 0;
    }
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            for (int m = 0; m <= n * n; m ++)
                b[m] = 0;
            for (int y = i * n; y < i * n + n; y ++) {
                for (int x = j * n; x < j * n + n; x ++) {
                    b[a[y][x]] = 1;
                }
            }
            for (int c = 1; c <= n * n; c ++)
                if (b[c] == 0) {
                    k ++;
                }
        }
    }
    if (k == 0) 
        cout << "Correct";
    else 
        cout << "Incorrect";
    return 0;
}       
