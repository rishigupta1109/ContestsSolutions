// https://codeforces.com/contest/1560/problem/B
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
  int t, a, b, c; cin >> t;
  while(t--){
    cin >> a >> b >> c;
    int s = abs(a-b) * 2;
    if(s < max(a, max(b, c))){
      cout << -1 << endl;
      continue;
    }
    if(c <= (s/2)){
      cout << c + (s/2) << endl;
    }
    else{
      cout << c - (s/2) << endl;
    }
  }
}
