#include <iostream>
using namespace std;


void func(string s,string &fans,int &l,int &r, int turn)
{
    if(l>r)
    {
        return ;
    }
    if(turn==0)//Alice's turn
    {
        //If value at index l is '0',Append it to beginning to
        //make it lexicographically smallest as per Alice's aim.
        //If value is '1', Append it at the end of the string.
        if(s[l]=='0')
        {
            if(fans=="")
            {
                fans="0";
            }
            else
            {
                fans.insert(0,"0"); 
            }
        }
        else
        {
            if(fans=="")
            {
                fans="1";
            }
            else
            {
                fans+="1";
            }
        }
        l++;
    }
    else //Bob's turn
    {
        //If value at index r is '0',Append it to the end to
        //make it lexicographically largest as per Bob's aim.
        //If value is '1', Append it at the beginning of the string.
        if(s[r]=='0')
        {
            fans+="0";
        }
        else
        {
            fans.insert(0,"1");
        }
        r--;        
    }
}
int main() {
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    string fans="";
	    int l=0,r=n-1,i=0;
	    while(l<=r)
	    {
	        func(s,fans,l,r,i%2);
	        i++;
	    }
	    cout<<fans<<endl;
	}
	return 0;
}

