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
    int n;
    cin >> n;
    vec a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % n != 0)
    {
        cn;
        return;
    }
    ll x = sum / n;
    for (int i = 0; i < n - 2; i++)
    {
        ll chk = x - a[i];
        if (chk < 0)
        {
            a[i + 2] += abs(chk);
            a[i] += chk;
        }
        else
        {
            a[i + 2] -= chk;
            a[i] += chk;
        }
    }
    for (auto it : a)
    {
        if (it != x)
        {
            cn;
            return;
        }
    }
    cy;
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}