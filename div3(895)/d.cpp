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
    ll n,x,y,co=0,co2=0,co3=0,res=0;
    cin>>n>>x>>y;
    co3=n/x;
    co2=n/y;
    co=n/((x*y)/__gcd(x,y));
    co3-=co;
    co2-=co;
    ll d=n;
    res += (co3 * (2 * n - co3 + 1)) / 2;
    res -= (co2 * (co2 + 1)) / 2;
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