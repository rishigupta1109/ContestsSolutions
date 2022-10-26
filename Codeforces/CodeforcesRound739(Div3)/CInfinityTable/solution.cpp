//https://codeforces.com/contest/1560/problem/C 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
  long int t, x; cin >> t;
  long int r, c;
  while(t--){
    cin >> x;
    for(int i=1; i < 31624; i++){
      if(i*i >= x){
        r = i;
        if(((i*i)-i) < x){
          c = ((i * i) - x) + 1;
        }
        else{
          c = i;
          r = r - ((((i * i) - i) + 1) - x);
        }
        break;
      }
    }
    cout << r << " " << c << endl;
  }
}
