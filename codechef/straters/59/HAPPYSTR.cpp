#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	unordered_set<char> st = {'a','e','i','o','u'};
	for(int i = 0; i < t; i++)
	{
	   string s;
	   cin >> s;
	   int cvowels=0, happy=0;//Maximum number of continuous vowel streak
	   int n = s.length();
	   for(int j = 0; j < n; j++)
	   {
	       if(st.find(s[j]) != st.end())
	       {
	           cvowels++;
	       }
	       else
	       {
	           //If non-vowel is encountered,Vowel-streak is broken.
	           cvowels=0;
	       }
	       if(cvowels > 2)//When vowel streak length > 2 is achieved
	       {
	           happy=1;
	           break;
	       }
	   }
	   if(happy == 1)
	   {
	       cout << "HAPPY" << endl;
	   }
	   else
	   {
	       cout << "SAD" << endl;    
	   }
	}
	
	return 0;
}

