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
    ll n,k;
    cin>>n>>k;
    vec v(n),v2(n);
    for(int i=0;i<n;i++){
        cin>>v[i];        
    }
    for(int i=0;i<n;i++){
        cin>>v2[i];        
    }
    ll x=-1;
    bool chk=false;
    for(int i=0;i<n;i++){
        if(v2[i]!=-1){
            ll sum=v[i]+v2[i];
            if(!chk){
                x=sum;
                chk=true;
            } 
            else{
                if(x!=sum){
                    cout<<0<<"\n";
                    return;
                }
            }
        }
    }
    if(!chk){
        ll l=0,h=2*k;
        for(int i=0;i<n;i++){
            l=max(l,v[i]);
            h=min(h,v[i]+k);
        }
        if(l>h){
            cout<<0<<"\n";
        }
        else{
            cout<<(h-l+1)<<"\n";
        }
        return;
    }
    for(int i=0;i<n;i++){
        if (v2[i]==-1){
            ll chk2=x-v[i];
            if (chk2<0 || chk2>k){
                cout<<0<<"\n";
                return;
            }
        }
    }
    cout<<1<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}
