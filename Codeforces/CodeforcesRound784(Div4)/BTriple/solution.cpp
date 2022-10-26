// https://codeforces.com/contest/1669/problem/B
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x; cin >> n;
    while(n--){
        int m; cin >> m;
        bool flag = false;
        unordered_map<int, int> dat;
        while(m--){
            cin >> x;
            dat[x]++;
        }
        for(auto a:dat){
            if(a.second >= 3){
                cout << a.first << endl;
                flag = true;
                break;
            }
        }
        if(!flag){
            cout << -1 << endl;
        }
    }
}
