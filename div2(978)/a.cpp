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
    vec v(n);
    ll res=0,ext=0,co=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]>1){
            res+=(v[i]/2)*2;
            co+=(v[i]/2);
        }
        ext+=(v[i]%2);
    }
    m-=co;
    //cout<<co<<"\n";
    //cout<<res<<" "<<m<<" "<<ext<<"\n";
    ll d=max(0LL,min(ext,(m*2)-ext));
    cout<<res+d<<"\n";

}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}