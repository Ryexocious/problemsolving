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
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(n==1){
        cout<<v[0]<<"\n";
        return;
    }
    sort(all(v));
    for(int i=n-1;i>0;i--){
        ll a=v[i],b=v[i-1];
        ll d=a+b-1;
        v.pop_back();
        v.pop_back();
        v.push_back(d);
    }
    cout<<v[0]<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}