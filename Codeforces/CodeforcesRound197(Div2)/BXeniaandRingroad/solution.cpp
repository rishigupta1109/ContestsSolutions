// https://codeforces.com/problemset/problem/339/B
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  long long int n, m; cin >> n >> m;
  vector<long long int> t;
  while(m--){
    long long int x; 
    cin >> x;
    t.push_back(x);
  }
  long long int s = 0;
  long long int p = 1;
  long long int it = 0;
  long long int x;
  while(1){
    x = t[it] - p;
    if(x >= 0){
      p += x;
      s += x;
      it ++;
      while(t[it] == p){
        it ++;
        if(it == t.size())break;
      } 
      if(it == t.size())break;
    }
    else{
      x = (n-p)+1;
      p = 1;
      s += x;
    }
    
  }
  cout << s << endl;
}
