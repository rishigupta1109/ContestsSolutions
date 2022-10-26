// https://codeforces.com/contest/1551/problem/B1

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
  map<char, int> m;
  int n, one, two; cin >> n;
  string in;
  while(n--){
    cin >> in;
    for(char x:in){
      if(m[x]) m[x]++;
      else m[x] = 1;
    }
    one = 0; two = 0;
    for(auto x:m){
      if(x.second >= 2) two++;
      else one++;
    }
    cout <<(two +(one / 2 )) << endl;
    m.clear();
  }
}
