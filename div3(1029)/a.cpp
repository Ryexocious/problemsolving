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
    ll n,x;
    cin>>n>>x;
    vec v(n);
    ll l=0,r=0;
    bool x2=false;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(!x2 && v[i]==1){
            x2=true;
            l=i;
        }
        if(v[i]==1){
            r=i;
        }
    }
    //cout<<r<<" "<<l<<"\n";
    if(r-l+1<=x){
        cy;
    }
    else{
        cn;
    }
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}