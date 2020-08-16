#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p;
        cin>>p;
        int itemPrice=2048,ans=0;
        while(p>0)
        {
            ans+=p/itemPrice;
            p%=itemPrice;
            itemPrice/=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}