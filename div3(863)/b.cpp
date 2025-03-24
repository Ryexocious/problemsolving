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
void solve(){
    ll n,x,y,a,b;
    cin>>n>>x>>y>>a>>b;
    ll d=min(min(x,y),min(n+1-x,n+1-y)),d2=min(min(a,b),min(n+1-a,n+1-b));
    cout<<abs(d-d2)<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}