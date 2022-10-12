#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector <int> vec;
  string s;
  cin >> s;
  int n, mn = s.length () + 1, cnt = 0, cnt_i;
  cin >> n;
  string a [n];
  for (int i = 0; i < n; i ++) {
    cin >> a [i];
    cnt_i = 0;
    for (int k = 0; k < s.length (); k ++) {
      if (s [k] != a [i][k])
        cnt_i ++;
    }
    mn = min (cnt_i, mn);
  }
  for (int i = 0; i < n; i ++) {
    cnt_i = 0;
    for (int k = 0; k < s.length (); k ++) {
      if (s [k] != a [i][k])
        cnt_i ++;
    }
    if (mn == cnt_i)
      vec.push_back (i + 1);
  }
  cout << vec.size () << "\n";
  for (int i = 0; i < vec.size (); i ++)
    cout << vec [i] << " ";
}
