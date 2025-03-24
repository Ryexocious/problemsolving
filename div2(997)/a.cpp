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
    ll n,m,a,b;
    cin>>n>>m;
    ll x1=m,x2=m;
    cin>>a>>b;
    for(int i=1;i<n;i++){
        int x,y;
        cin>>x>>y;
        x1+=x;x2+=y;
    }
    if(n==1){
        cout<<4*m<<"\n";
        return;
    }
    cout<<2*x1+2*x2<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}