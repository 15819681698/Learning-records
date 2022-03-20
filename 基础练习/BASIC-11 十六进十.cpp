#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
        int leth=s.length();
        long long sum=0;
        for(int i=0;i<leth;i++)
        {
            if(s[i]>='A'&&s[i]<='F')
            {
                sum=sum*16+s[i]-'A'+10;
            }
            else
            {
                sum=sum*16+s[i]-'0';
            }
        }
        cout<<sum;
    return 0;
}
