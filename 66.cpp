#include <bits/stdc++.h>
using namespace std;
  
int main() {
    string s="qwertyuiopasdfghjklzxcvbnmq";
    char c;
    cin >> c;
    int pos = s.find(c);
    cout << s[++pos];
}
