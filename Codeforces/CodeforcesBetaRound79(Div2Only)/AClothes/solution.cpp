// https://codeforces.com/problemset/problem/102/A
#include <bits/stdc++.h>
#define FOR(n)      for(int i=0; i<n; i++)
using namespace std;

int main(){
    int m, n, x, y;
    cin >> n >> m;

    vector<int> prices(n);
    FOR(n){
        cin >> prices[i];
    }

    set<pair<int, int>> match;
    int min_price = INT_MAX;;
    FOR(m){
        cin >> x >> y;
        if(x>y){int temp=x; x=y; y=temp;}
        match.insert(pair<int, int>(x, y));
    }

    for(int i=1; i<=n; i++){
        for(int j=2; j<=n; j++){
            for(int k=2; k<=n; k++){
                int cur_price = prices[i-1] + prices[j-1] + prices[k-1];
                if(match.find(pair<int, int>(i, j))!=match.end() && 
                    match.find(pair<int, int>(i, k))!=match.end() && 
                    match.find(pair<int, int>(j, k))!=match.end() &&
                    cur_price<min_price)
                {
                    min_price = cur_price;
                }
            }
        }
    }

    if(min_price == INT_MAX)
        cout << -1 << endl;
    else
        cout << min_price << endl;

}

