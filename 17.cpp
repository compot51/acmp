#include <bits/stdc++.h>
using namespace std;
 
int main(){
      int i, j, n, a[30001];
      cin >> n;
      for(i=0; i<n; i++) cin >> a[i];
      n--;
      for(i=1; i<n; i++) if(n%i==0){
        j=0;
        while((a[j%i]==a[j]) && (j<n)) j++;
        if(j==n){
            n=i;
            break;
        }
      }
     cout << n;
}
