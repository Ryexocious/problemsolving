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
bool chk(ll x){
    ll d=sqrt(x);
    if((d*d)==x && d%2!=0){
        return true;
    }
    else{
        return false;
    }
}
void solve(){
    ll n;
    cin>>n;
    ll sum=0,co=0;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
        if(chk(sum)){
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