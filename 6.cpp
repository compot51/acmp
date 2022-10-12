#include <bits/stdc++.h>
#define what_guys_anime cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
#define ll long long
#define elif else if
using namespace std;
 
int main(){
    string s;
    cin >> s;
    if (s[2] != '-' || s.length() < 5 ||
       s[1] < '1' || s[1] > '8' || s[4] < '1' || s[4] > '8'||
       s[0] < 'A' || s[0] > 'H' || s[3] < 'A' || s[3] > 'H') 
        cout << "ERROR";
    elif (abs((s[1] - s[4]) * (s[0] - s[3])) != 2) 
        cout << "NO";
    else 
        cout << "YES";
}
