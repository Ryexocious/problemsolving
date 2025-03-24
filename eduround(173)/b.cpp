#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<ll> vec;
typedef map<string,int> mp;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pob pop_back
void solve(){
    ll n,d;
    cin>>n>>d;
    vec ans;
    ans.pb(1);
    for (ll i = 3; i <10; i += 2)
    {
        ll r = 1;
        ll num = d;
        bool f = true;
        while (num % i)
        {
            num *= 10;
            num += d;
            num %= i;
            r++;
            if (r >= i + 1)
            {
                f = false;
                break;
            }
        }
        if (!f)
        {
            continue;
        }
        if (n >= r)
        {
            ans.pb(i);
        }
        else
        {
            ll val = 1;
            for (ll j = 1; j <= n; j++)
            {
                val *= j;
            }
            if (val % r == 0)
            {
                ans.pb(i);
            }
        }
    }
    for(auto it : ans){
        cout<<it<<" ";
    }
    cout<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}