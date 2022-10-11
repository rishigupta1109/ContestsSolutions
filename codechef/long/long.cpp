/*Nikhil*/
#include <bits/stdc++.h>
using namespace std;

/**************************************MACROS**************************************/

#define int long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl '\n'
#define u_m unordered_map
#define u_s unordered_set
#define p_q priority_queue
#define pi pair<int, int>

/**************************************DEBUGGER**************************************/

template <typename T>
void __print(const T &x);
void __print(const int &x) { cerr << x; }
void __print(const float &x) { cerr << x; }
void __print(const double &x) { cerr << x; }
void __print(const char &x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(const bool &x) { cerr << (x ? "true" : "false"); }
template <typename T, typename V>
void __print(const pair<T, V> &x) { cerr << '(', __print(x.first), cerr << ',', __print(x.second), cerr << ')'; }
template <typename T>
void __print(const T &x) { int f = 0; cerr << "{"; for (auto i : x) { cerr << (f++ ? "," : ""), __print(i); } cerr << "}"; }
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v) { __print(t); if (sizeof...(v)) {cerr << ", ";} _print(v...); }
#ifndef ONLINE_JUDGE
#define deb(x...)               \
    cerr << "[" << #x << ":  "; \
    _print(x)
#else
#define deb(x...)
#endif

/**************************************ALGORITHMS**************************************/

int __pow(int a, int n) {int res=1; while(n){if(n&1) res = res*a; n>>=1;a=(a*a);} return res;}
int __pow(int a, int n, int M)  {int res=1; while(n){if(n&1) res = (res*a)%M; n>>=1;a=(a*a)%M;} return res%M;}
int mi(int a, int M) { return __pow(a, M-2, M);}
int lcm(int a, int b) { return (a / __gcd(a, b) ) * b;}
template<typename T> 
void rv(T &a, int n) { for (int i=0; i<n; i++) cin >> a[i];}
template <typename T>
void umin(T &a, T b) {a = min(a, b);}
template <typename T>
void umax(T &a, T b) {a = max(a, b);}

/**************************************MAIN CODE**************************************/

const int N = 100, inf = 1e18, M = 998244353;
int n, m, k, x, y, z, q;

void test_case()
{
    cin >> n;
    cout << ((67<=n && n<=45000) ? "YES" : "NO") << endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int TEST = 1;
    cin >> TEST;
    for (int t=1; t<=TEST; t++)
    {
        // cout<<"Case #"<<t <<": ";
        test_case();
    }
    return 0;
}