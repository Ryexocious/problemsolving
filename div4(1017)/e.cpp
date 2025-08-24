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
    ll n;
    cin>>n;
    vec a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vec bco(31,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<31;j++){
            if((a[i]>>j)&1) bco[j]++;
        }
    }
    ll res=0;
    for(int i=0;i<n;i++){
        ll cur=0;
        for(int j=0;j<31;j++){
            ll b=(a[i]>>j)&1;
            if(b==1){
                cur+=(1LL<<j)*(n-bco[j]);
            } 
            else{
                cur+=(1LL<<j)*bco[j];
            }
        }
        res=max(res,cur);
    }
    cout<<res<<'\n';
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}

