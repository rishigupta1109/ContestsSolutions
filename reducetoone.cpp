#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pb push_back
#define all(_obj) _obj.begin(), _obj.end()
#define F first
#define S second
#define pll pair<ll, ll>
#define vll vector<ll>
const int N = 1e6+ 11, mod = 1e9 + 7;
ll arr[N];
ll max(ll a, ll b) { return ((a > b) ? a : b); }
ll min(ll a, ll b) { return ((a > b) ? b : a); }
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
void precomp()
{
    ll ans = 1;
    arr[1] = ans;
    for (int i = 2; i <= N ; ++i)
    {
        ans = ((ans%mod + i)%mod + ((ans%mod)* i)%mod)%mod;
        arr[i] = ans;
    }
}
void sol(void)
{
    ll n; cin >> n;
    cout << arr[n] << endl;
    return;
    
}
int main()
{
    precomp();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int test;
    cin >> test;
    while (test--)
        sol();
}
