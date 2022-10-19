#include <iostream>
#include <vector>
using namespace std;

int main() {
    // your code goes here
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int A[n];

        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }

        int count = 0;  // of size greater than 2

        int a1 = A[0];
        int size = 1;
        bool increasing = false;

        vector<int> str_imp;

        for (int i = 1; i < n; i++) {
            int a2 = A[i];
            if (size == 1) {
                if (a2 > a1)
                    increasing = true;
                else
                    increasing = false;
                size++;
            } else {
                // size  > 1
                if ((increasing and a2 > a1) or ((!increasing) and a2 < a1)) {
                    size++;
                    // count++;
                } else {
                    // str_imp.push_back(size);
                    increasing = !increasing;
                    if (size > 2) str_imp.push_back(size - 2);
                    size = 2;
                }
            }

            a1 = a2;

        }
        if (size > 2) str_imp.push_back(size - 2);

        int ans = 0;

        for (auto i : str_imp) {
            // cout << i << " ";
            ans = ans ^ i;
        }

        // cout << endl;

        if (ans == 0) {
            cout << "Bob\n";
        } else
            cout << "Alice\n";
    }
    return 0;
}
