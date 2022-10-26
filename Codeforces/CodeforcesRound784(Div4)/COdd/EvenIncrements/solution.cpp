// https://codeforces.com/contest/1669/problem/C
#include<bits/stdc++.h>
using namespace std;
#define FOR(n) for(int i=0; i<n; i++) 

int main(){
    int n, x; cin >> n;
    while(n--){
        int s; cin >> s;
        vector<int> arr(s);
        FOR(s){
            cin >> arr[i];
        }
        if(s<3){
            cout << "YES" << endl;
            continue;
        }
        bool flag = true;

        for(int i=2; i<s; i+=2){
            if(arr[i]%2!=arr[i-2]%2){
                cout << "NO" << endl;
                flag = false;
                break;
            }
        }
        if(!flag)continue;
        for(int i=3; i<s; i+=2){
            if(arr[i]%2!=arr[i-2]%2){
                cout << "NO" << endl;
                flag = false;
                break;
            }
        }
        if(!flag)continue;
        cout << "YES" << endl;

    }
}
