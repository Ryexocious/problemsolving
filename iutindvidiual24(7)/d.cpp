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
    ll n,k,mi=1e6,x,sum=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>x;
        sum+=x;
        mi=min(x,mi);
    }
    k-=sum;
    ll d=k/mi;
    cout<<n+d<<"\n";
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }   
}