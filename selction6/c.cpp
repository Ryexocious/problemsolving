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
    ll n,sum=0,x,d=1e9+1,co=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x<0){
            co++;
        }
        sum+=abs(x);
        d=min(d,abs(x));
    }
    if(co%2!=0){
        sum-=2*d;
    }
    cout<<sum<<"\n";


}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}