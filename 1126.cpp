#include <iostream>
 
using namespace std;
 
int main()
{
    int n, p=2;
    cin >> n;
    while (n%p!=0) p++;
    cout << p;
    return 0;
}
