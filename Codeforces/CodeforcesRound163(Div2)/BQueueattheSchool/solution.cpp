// https://codeforces.com/problemset/problem/266/B
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, t;
  cin >> n >> t;
  string queue;
  cin >> queue;
  bool skip = false;
  while(t--){
    for(int i=0; i<n; i++){

      if (skip){
        skip = false;
        continue;
      }
      if(queue[i] == 'B' && queue[i+1] == 'G'){
        queue[i] = 'G';
        queue[i+1] = 'B';
        skip = true;
      }
    }

  }
  cout << queue << endl;
}
