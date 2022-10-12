#include <bits/stdc++.h>
 
using namespace std;
 
int main()  
{   
    int i, j;
    char a[j];
    cin >> a;
    for(i=0;a[i]!=0;i++) {
        if(a[i]<='z' && a[i]>='a'){
            a[i]+='A'-'a';
            }
    }
    cout << a;
}
