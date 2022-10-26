// https://codeforces.com/contest/1579/problem/B
#include<bits/stdc++.h>
using namespace std;

int main(){
  int k, n, x, m; cin >> n;
  vector<int> v;
  vector<vector<int>> t;
  while(n--){
    cin >> x;
    while(x--){
      cin >> m;
      v.push_back(m);
    }
    k = 0;
    for (int i = 0; i < v.size()-1; i++){
      for (int j = 0; j < v.size()-i-1; j++){
        if (v[j] > v[j+1]){
            swap(v[j], v[j+1]);
            t.push_back({j, j+1, 1});
            k++;
        }
      }
    }

    cout << k<< endl;
    for(auto i:t){
      cout << i[0]+1 <<" " << i[1]+1 << " " << i[2] << endl;
    }

    v.clear();
    t.clear();

  }
}
