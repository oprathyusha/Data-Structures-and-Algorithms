#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
while(t){
    string s;
    cin>>s;
    int n = s.length();
    int i=0, j=n-1;
    while(i<j)
    {
        char temp;
        temp=s[j];
        s[j--]=s[i];
        s[i++]=temp;
    }
    cout<<s<<endl;
    t--;
}
    
}