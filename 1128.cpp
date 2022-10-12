#include <iostream>
 
using namespace std;
 
int main()
{
    double x, y, p=1.15;
    long long i=1;
    cin >> x >>y;
    while(x+0.000001<y){
        i++;
        x=x*p;
    }
    cout << i;
}
