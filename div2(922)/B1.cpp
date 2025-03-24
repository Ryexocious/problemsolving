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
int ar[1001];
const ll mx= 1e9+1;
void solve(){
    ll n,m,r,x,res=0,co=0,co2=0,d=mx,k,l,cmp;
    cin>>n>>m>>r;
    vec v(m);
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    sort(all(v));
    cin>>x;
    if(x<v[0]) res=v[0]-1;
    else if(x>v[1]) res=n-v[1];
    else if(x==v[0] || x==v[1]) res=0;
    else res=(v[1]-v[0])/2;
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