#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
  map<char, int> m;
  m['c'] = 12;
  m['x'] = 9;
  m['r'] = 19;
  for(auto x:m){
    cout << x.first<<": "<<x.second << endl;
  }
}
