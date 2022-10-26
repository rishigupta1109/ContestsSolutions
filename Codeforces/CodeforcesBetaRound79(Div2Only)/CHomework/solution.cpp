// https://codeforces.com/contest/102/problem/C
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int k; cin >> k;
    map<char, int> m;
    for(char c:s)m[c]++;

    vector<pair<int, char>> count_list;
    for(pair<char, int> p:m)count_list.push_back({p.second, p.first});

    sort(count_list.begin(), count_list.end());
    int count=0;
    for (auto x : count_list) {
        if (x.first <= k) {
            k -= x.first;
            m[x.second] -= x.first;
 
        }
    }
    for(pair<char, int> p:m)if(p.second!=0)count++;
    cout << count << endl;
    for(int i=0; i<s.size(); i++){
        if(m[s[i]]==0)continue;
        cout << s[i];
    }
    cout << endl;
}
