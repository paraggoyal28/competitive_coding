#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b,c,t,n,m,k; 
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	ll ar[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>a;
    		ar[i] = a;
    	}
    	b = 1e10;
    	for(int i=0;i<n;i++)
    	{
    		b = min(b,ar[i]);
    	}
    	ll cnt =0;
    	stack <ll> st;
    	for(int i=0;i<n;i++)
    	{
    		if(st.empty())
    		{
    			st.push(ar[i]);
    			continue;
    		}
    		else
    		{
    			a = st.top();
    			if(ar[i]==a)
    				continue;
    			while(!st.empty()&&st.top()>ar[i])
    			{
    				st.pop();
    				cnt++;
    			}
    			if(!st.empty()&&st.top()==ar[i])
    				st.pop();
    			st.push(ar[i]);
    		}
    	}
    	cnt += st.size()-1;
     	cout<<cnt<<endl;
    }
    return 0;
}
