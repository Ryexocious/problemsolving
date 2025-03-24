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
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mfor(i,n) for(int i=0;i<(n);i++)
#define rfor(i,n) for(int i=(n-1);i>0;i--)
//string s="abcdefghijklmnopqrstuvwxyz";
void solve(){
    ll n;
    cin>>n;
    vec v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    ll ce=n/2,co,maxe=0,maxo=0;
    co=n-ce;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            maxo=max(v[i],maxo);
        }
        else{
            maxe=max(v[i],maxe);
        }
    }
    ll res=max(maxe+ce,maxo+co);
    cout<<res<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}