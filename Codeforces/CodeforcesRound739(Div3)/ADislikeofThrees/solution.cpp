// https://codeforces.com/contest/1560/problem/A
#include<iostream>
#include<bits/stdc++.h>
#include <string>

using namespace std;

int main(){
  int t; cin >> t;
  int x;
  string s;
  while(t--){
    cin >> x;
    int n = 1;
    while(x){
      s = to_string(n);
      if(n % 3 != 0 && s[s.length()-1]!='3')x--;
      n++;
    }
    cout << (n-1) << endl;
  }
}
