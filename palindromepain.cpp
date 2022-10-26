#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int x, y; cin >> x >> y;
        if (x == 1 || y == 1 || (x % 2 == 1 && y % 2 == 1)) {
            cout << "-1\n";
        } else {
            char mid = (x % 2 == 1 ? 'a' : y % 2 == 1 ? 'b' : '#');
            // mid != '#' indicates whether to put middle character or not
            string s1 = string(x / 2, 'a') + string(y / 2, 'b') + string(mid != '#', mid) + string(y / 2, 'b') + string(x / 2, 'a');
            string s2 = string(y / 2, 'b') + string(x / 2, 'a') + string(mid != '#', mid) + string(x / 2, 'a') + string(y / 2, 'b');
            cout << s1 << '\n' << s2 << '\n';
        }
    }
}
