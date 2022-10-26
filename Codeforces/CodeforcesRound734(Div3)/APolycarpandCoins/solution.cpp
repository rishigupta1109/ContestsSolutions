// https://codeforces.com/contest/1551/problem/A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
  int n; cin >> n;
  int t, c1, c2;
  while(n--){
    cin >> t;
    c1 = t / 3;
    c2 = c1;
    int rem = t - (c1 + (c2 * 2));
    if (rem == 1)c1 ++;
    if(rem == 2)c2 ++;
    cout << c1 << " " << c2 << endl;
  }
}
