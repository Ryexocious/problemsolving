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
    cin>>n;
    vec v(n);
    ll res = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for (int k = 1; k <=n/2; k++) {
        if (n % k == 0) {
            ll mx = -1e18, mn = 1e18;
            ll sm=0;
            for (int i = 1; i <= n; i++) {
                sm+=v[i-1];
                if(i%k==0){
                    mx = max(mx, sm);
                    mn = min(mn, sm);
                    sm=0;
                }
            }
            res = max(res, mx - mn);
        }
    }
    cout << res << '\n';
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}