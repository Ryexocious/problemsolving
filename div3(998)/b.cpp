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
    cin>>n>>m;
    vector<vector<ll>>v(n,vector<ll>(m));
    vector<pair<ll,ll>>v2;
    for(int i=0;i<n;i++){
        vec tmp(m);
        for(int j=0;j<m;j++){
            cin>>tmp[j];
        }
        sort(all(tmp));
        v2.pb({tmp[0],i+1});
        v[i]=tmp;
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<v[i][j];
    //     }
    //     cout<<"\n";
    // }
    for(int i=0;i<n;i++){
        bool x=true;
        for(int j=1;j<m;j++){
            if(v[i][j]-v[i][j-1]!=n){
                cout<<-1<<"\n";
                return;
            }
        }
    }
    sort(all(v2));
    for(auto it: v2){
        cout<<it.second<<" ";
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