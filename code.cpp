#include<iostream>
#include<queue>
#include<list>
#include<iterator>
#include<vector>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


typedef long long int ll;
/*struct node
{
    vector<ll> pos;
    ll f;
};*/
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll t;
	cin>>t;
	while(t--)
	{
	    string a;
	    cin>>a;
	    ll na=0,nb=0,nc=0;
	    for(ll i=0;i<a.size();i++)
	    {
	        if(a[i]=='A')
	         na++;
	        else if(a[i]=='B')
	         nb++;
	        else
	         nc++;
	    }
	    if(na>0&&nc>0)
	    {
	        if(nb==na+nc)
	         cout<<"YES\n";
	        else
	         cout<<"NO\n";
	    }
	    else if(na==0)
	    {
	        if(nc==nb)
	         cout<<"YES\n";
	        else
	         cout<<"NO\n";
	    }
	    else if(nc==0)
	    {
	        if(na==nb)
	         cout<<"YES\n";
	        else
	         cout<<"NO\n";
	    }
	    else
	     cout<<"NO\n";
	}
	return 0;
}
