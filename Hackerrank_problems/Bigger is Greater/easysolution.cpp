#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;                     
    cin>>t;                     //taking no. of test cases
    while(t--)
    {
        string s;               
        cin>>s;                 //taking strings as input
        string a=s;             //making copy of string
        bool val=next_permutation(s.begin(),s.end());         //finding if next permutation exist or not
        if(a==s)                                              //if both are equal
        cout<<"no answer\n";
        else if(a!=s&&val==true)                              
        cout<<s<<"\n";
        else
        cout<<"no answer\n";
    }
}
