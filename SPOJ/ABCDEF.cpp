// code for ABCDEF in SPOJ
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<ll> lhs,rhs,set;
    ll n, input, result = 0;
    cin >> n;
    for(ll i = 0; i < n; i++)
    {
        cin >> input;
        set.push_back(input);
    }
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < n; j++)
        {
            for(ll k = 0; k < n; k++)
            {
                lhs.push_back(set[i]*set[j] + set[k]);
                if(set[k] != 0)
                rhs.push_back(set[i]*set[k] + set[j]*set[k]);
            }
        }
    }
    sort(rhs.begin(),rhs.end());
    for(ll i = 0, len = lhs.size(); i < len; i++)
    {   
        ll upper, lower;
        if(binary_search(rhs.begin(), rhs.end(), lhs[i]))
        {
            upper = upper_bound(rhs.begin(), rhs.end(), lhs[i]) - rhs.begin(); 
            lower = lower_bound(rhs.begin(), rhs.end(), lhs[i]) - rhs.begin();
            result = result + upper - lower;
        }
    }
    cout << result << endl;
    return 0;
}
