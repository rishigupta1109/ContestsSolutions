// https://codeforces.com/contest/1579/problem/0
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  string s;
  map<char, int> m;
  while(n--){
    cin >> s;
    for(char i:s){
      m[i]++;
    }
    if(m['A']+m['C'] == m['B']){
      cout << "YES"<< endl;
    }
    else{
      cout << "NO" << endl;
    }
    m.clear();
  }
}
