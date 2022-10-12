#include <bits/stdc++.h>
#define ll long long
#define haha cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
#define elif else if
using namespace std;
 
ll n, res=0;
 
void rec(int x, int y){
    for(int i=x; i<=y; i++) rec(i+1,y-i);
    if(y==0) res++;
}
int main(){
    haha
    cin >> n;
    rec(1,n);
    cout << res;
}
