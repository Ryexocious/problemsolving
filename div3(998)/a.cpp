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
    vec v(4);
    ll a3=0,a4;
    for(int i=0;i<4;i++){
        cin>>v[i];
    }
    a3=v[0]+v[1];
    ll co=0,co2=0;
    if(a3==v[0]+v[1]) co++;
    if(v[2]==v[1]+a3) co++;
    if(v[3]==a3+v[2]) co++;
    a3=v[2]-v[1];
    if(a3==v[0]+v[1]) co2++;
    if(v[2]==v[1]+a3) co2++;
    if(v[3]==a3+v[2]) co2++;
    cout<<max(co,co2)<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}