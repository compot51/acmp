#include <bits/stdc++.h>
#define what_guys_anime cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
#define ll long long
#define elif else if
using namespace std;
 
int main(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    for(int i=-100; i<=100; i++)
        if(a*i*i*i+b*i*i+c*i+d==0) cout << i << " ";
}
