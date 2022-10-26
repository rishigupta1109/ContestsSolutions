// https://codeforces.com/contest/104/problem/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)cin >> v[i];
    for(int i=0; i<n; i++)c+= v[i] + ((v[i]-1)*i);
    cout << c << endl;
}
