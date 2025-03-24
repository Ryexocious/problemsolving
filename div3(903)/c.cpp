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
    ll n;
    cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll res2=0;
    for (int i = 0; i < n / 2; i++) {
        for (int j = i; j < n - i - 1; j++) {
            vec res;
            res.pb(v[i][j]-'a');
            res.pb(v[j][n - 1 - i]-'a');
            res.pb(v[n - 1 - i][n - 1 - j]-'a');
            res.pb(v[n - 1 - j][i]-'a');
            sort(all(res));
            for(int i=0;i<res.size();i++){
                res2+=(res[res.size()-1]-res[i]);
            }
        }
    }
    cout<<res2<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}