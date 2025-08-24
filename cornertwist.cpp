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
    vector<string>v(n),v2(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
    for(int i=0;i<n;i++){
        ll d=0;
        for(int j=0;j<m;j++){
            d+=abs((v2[i][j]-'0')-v[i][j]-'0');
        }
        if(d%3!=0){
            cn;
            return;
        }
    }
    for(int i=0;i<m;i++){
        ll d=0;
        for(int j=0;j<n;j++){
            d+=abs((v2[j][i]-'0')-v[j][i]-'0');
        }
        if(d%3!=0){
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