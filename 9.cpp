#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef unsigned long long ull;
 
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    ll n, s=0, p=1, mn=0, mx=0;
    cin >> n;
    ll a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++){
        if(a[i]>0) s+=a[i];
        if(a[i]>a[mx]) mx=i;
        if(a[i]<a[mn]) mn=i;
    }
    if(mx>mn) for(int i=mn+1; i<=mx-1; i++) p*=a[i];
    else for(int i=mx+1; i<=mn-1; i++) p*=a[i];
    cout << s << " " << p;
}
