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
    ll n,m;
    cin>>n;
    vec v(n),v2(m);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }
    sort(all(v));
    sort(all(v2));
    ll res=0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (abs(v[i]-v2[j])<=1){
                v2[j]=1000;
                res++;
                break;
            }
        }
    }
    // for(auto it: v){
    //     cout<<it<<" ";
    // }
    // cout<<"\n";
    cout<<res<<"\n";
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }
}