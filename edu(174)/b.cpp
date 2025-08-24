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
    map<ll,ll>m2;
    vector<vec>v(n,vec(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
            m2[v[i][j]]=1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            if(v[i][j]==v[i][j-1]){
                m2[v[i][j]]=2;
            }
        }
        if(i>0){
            for(int k=0;k<m;k++){
                if(v[i][k]==v[i-1][k]){
                    m2[v[i][k]]=2;
                }
            }
        }
    }
    ll res=0,mx=0;
    for(auto it : m2){
        res+=it.second;
        mx=max(it.second,mx);
    }
    cout<<res-mx<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}