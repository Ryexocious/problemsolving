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
    ll n,d,co;
    cin>>n;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // for(auto it : v){
    //     cout<<it<<" ";
    // }
    // cout<<"\n";
    bool chk = true;
    d=n-1;
    for (ll i = 0; i < n; i++) {
        ll m=max(n-i-1,i);
        if(v[i]<=2*m){
            chk=false;
            break;
        }
    }
    if(chk){
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