#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define vect vector<int>
#define all(x) (x).begin(), (x).end()
#define ll long long
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

#define debug(x)       \
    cout << #x << " "; \
    _print(x);         \
    cout << endl;
void _print(int t)
{
    cout << t;
}
template <class T>
void _print(vector<T> v)
{
    cout << "[ ";
    for (T i : v)
    {
        _print(i);
        cout << " ";
    }
    cout << "]";
}

void solve()
{
    ll cnt = 0;
    ll res = 0;
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &var : v)
    {
        cin >> var;
    }
    vector<ll> arr(n / 2);

    ll half = n / 2;
    for (ll i = 0; i < half; i++)
    {
        if (v[n - i - 1] < v[i])
        {
            cout << -1;
            cout << endl;
            return;
        }
        else
        {
            arr[cnt] = abs(v[n - i - 1] - v[i]);
            cnt++;
        }
    }
    for (ll i = 1; i < cnt; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            cout << -1;
            cout << endl;
            return;
        }
    }
    cout << arr[0];
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        solve();
    }
    return 0;
}
