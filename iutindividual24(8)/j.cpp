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
const ll mx=1e9+7;
void solve(int c){
    ll n,x,y,z,x2,y2,z2,xm=mx,ym=mx,zm=mx,xm2=0,ym2=0,zm2=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y>>z>>x2>>y2>>z2;
        xm2=max(x,xm2);
        ym2=max(y,ym2);
        zm2=max(z,zm2);
        xm=min(xm,x2);
        ym=min(ym,y2);
        zm=min(zm,z2);
    }
    if((xm-xm2)>0 && (ym-ym2)>0 && (zm-zm2)){
        ll res=(xm-xm2)*(ym-ym2)*(zm-zm2);
        cout<<"Case "<<c<<": "<<res<<"\n";    
    }
    else{
        cout<<"Case "<<c<<": "<<0<<"\n";
    }
}
int main(){
    fast;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve(i);
    }   
}