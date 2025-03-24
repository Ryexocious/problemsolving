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
void solve() {
    ll n,q;
    cin>>n>>q;
    vec v(n+1);
    vector<vec>v2(n+1);
    for(int i=1;i<=n;i++){
        v[i]=i;
        v2[i].pb(i);
    }
    while (q--) {
        ll x;
        cin>>x;        
        if(x==1){
            ll a,b;
            cin>>a>>b;
            ll d=v[a];
            vec temp = v2[d];
            temp.erase(remove(temp.begin(),temp.end(),a),temp.end());
            v[a]=b;
            v2[b].pb(a);
        }
        else if(x==2){
            ll a,b;
            cin>>a>>b;
            swap(v2[a],v2[b]);
            for(auto it : v2[a]){
                v[it]=a;
            }
            for(auto it : v2[b]){
                v[it]=b;
            }
        }
        else if(x==3){
            ll a;
            cin>>a;
            cout<<v[a]<<"\n";
        }
    }
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }
}