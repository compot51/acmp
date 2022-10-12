#include<stdio.h> 
using namespace std; 
int a[100001], b[100001], n, c; 
int main(){ 
    int n, m; 
    scanf("%d %d", &n, &m); 
    for (int i = 0; i < n; i ++) { 
        scanf("%d", &c); 
        a[c] = 1; 
    } 
    for (int i = 0; i < m; i ++) { 
        scanf("%d", &c); 
        b[c]=1; 
    } 
    for (int i = 0; i < 100001; i ++) { 
        if(a[i] && b[i]) 
          printf("%d ", i); 
    } 
}
