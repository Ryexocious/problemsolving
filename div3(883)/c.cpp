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
bool comp(pair<ll, ll> a, pair<ll, ll> b){
    if (a.first != b.first)
        return a.first > b.first;
    return a.second < b.second;
}

void solve(){
    ll n,m,h;
    cin>>n>>m>>h;
    vector<vec>v(n,vec(m));
    vector<pair<ll,ll>>v2(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
        sort(all(v[i]));
    }
    for(int i=0;i<n;i++){
        ll th=0,p=0,tp=0;
        for(int j=0;j<m;j++){
            th+=v[i][j];
            if(th<=h){
                p++;
                tp+=th;
            }
        }
        v2[i]={p,tp};
    }
    pair<ll,ll> d=v2[0];
    sort(all(v2),comp);
    ll co=1,res;
    for(auto it : v2){
        if(it.first==d.first && it.second==d.second){
            res=co;
            break;
        }
        co++;
    }
    cout<<res<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}