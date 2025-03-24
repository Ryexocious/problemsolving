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
const ll mx= 1e9+7;
void solve(){
    ll n,co=0;
    cin>>n;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0){
            co++;
        }
    }
    ll d=1;
    for(int i=1;i<=co;i++){
        d=(d*2)%mx;
    }
    cout<<d<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}