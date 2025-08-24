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
    ll n,s,co=0; 
    cin>>n>>s;
    ll mod=2*s;
    ll v[2]={0,s};
    for(int i=0;i<n;i++){
        ll dx,dy,x,y;
        cin>>dx>>dy>>x>>y;
        bool x2=false;
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                if(x2){
                    break;
                }
                ll d=v[j],d2=v[k];
                ll dt=dx*(d-x),dt2=dy*(d2-y);
                dt%=mod;
                dt2%=mod;
                if(dt<0){
                    dt+=mod;
                }
                if(dt2<0){
                    dt2+=mod;
                }
                if(dt==dt2){
                    x2=true;
                }
            }
        }
        if(x2){
            co++;
        }
    }
    cout<<co<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}

