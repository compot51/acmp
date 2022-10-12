#include <bits/stdc++.h>
#define ll long long
#define haha cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
#define elif else if
using namespace std;
 
int main(){
  haha
  string a, b;
  ll cntb=0, cntk=0;
  cin >> a >> b;
  for(int i=0; i<4; i++){
    if(a[i]==b[i]) cntb++;
    for(int j=0; j<4; j++){
        if(a[i]==b[j] && i!=j) cntk++;
    }
  }
  cout << cntb << " " << cntk;
}
