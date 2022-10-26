#include <vector>
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){

		int n;
		string s;

		cin >> n;
		cin >> s;

		int count = 0;
		char l = s[0];

		for(int i = 1; i < n; i++){
				if (s[i] != l) l = s[i];
				else count++;
		}
		cout << count << endl;

		return 0;
}
