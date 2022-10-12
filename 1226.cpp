#include <iostream>
using namespace std;
 
char n, m, k;
 
int isletter(char x) {
    if (x=='a' || x=='A') return 1;
    else if (x=='b' || x=='B') return 1;
    else if (x=='c' || x=='C') return 1;
    else if (x=='d' || x=='D') return 1;
    else if (x=='e' || x=='E') return 1;
    else if (x=='f' || x=='F') return 1;
    else if (x=='g' || x=='G') return 1;
    else if (x=='h' || x=='H') return 1;
    else if (x=='i' || x=='I') return 1;
    else if (x=='j' || x=='J') return 1;
    else if (x=='k' || x=='K') return 1;
    else if (x=='l' || x=='L') return 1;
    else if (x=='m' || x=='M') return 1;
    else if (x=='n' || x=='N') return 1;
    else if (x=='o' || x=='O') return 1;
    else if (x=='p' || x=='P') return 1;
    else if (x=='q' || x=='Q') return 1;
    else if (x=='r' || x=='R') return 1;
    else if (x=='s' || x=='S') return 1;
    else if (x=='t' || x=='T') return 1;
    else if (x=='u' || x=='U') return 1;
    else if (x=='v' || x=='V') return 1;
    else if (x=='w' || x=='W') return 1;
    else if (x=='x' || x=='X') return 1;
    else if (x=='y' || x=='Y') return 1;
    else if (x=='z' || x=='Z') return 1;
    else return 0;
}
 
int main() {
    cin >> n >> m >> k;
    cout << isletter(n)+isletter(m)+isletter(k);
}
