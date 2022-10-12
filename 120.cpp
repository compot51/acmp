#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    ll n, m;
    cin >> n >> m;
    ll a[n][m], dp[n][m];
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < m; j ++) {
            cin >> a[i][j];
            if (i == 0 && j == 0)
                dp [i][j] = a[i][j];    
        }
    }
     
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < m; j ++) {
            if (i == 0 && j != 0)
                dp[i][j] = a[i][j] + dp[i][j - 1];
            else if (i != 0 && j == 0)
                dp[i][j] = a[i][j] + dp[i - 1][j];
            else if (i != 0 && j != 0)
                dp[i][j] = a[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
            //cout << dp[i][j] << " ";
        }
        //cout << "\n";
    }
     
    cout << dp [n - 1][m - 1];
}
