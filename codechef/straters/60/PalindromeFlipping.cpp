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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ocount = 0;
    int ecount = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            ocount++;
        }
        else
            ecount++;
    }

    if(ocount%2==0 || ecount%2==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

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
