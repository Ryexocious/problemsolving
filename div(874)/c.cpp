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
    ll n;
    cin>>n;
    vec v(n);
    ll mn=1e18;
    ll codd=0,cev=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]&1){
            codd++;
        }
        else{
            cev++;
        }
        mn=min(v[i],mn);
    }
    if(codd==0 || cev==0){
        cy;
    } 
    else{
        if(mn&1){
            cy;
        }
        else{
            cn;
        }
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