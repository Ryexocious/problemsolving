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
const ll mx=1e9;
void solve(){
    ll n;
    cin>>n;
    vec v(n),v2(n),v3;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
    sort(all(v));
    sort(all(v2));
    for(int i=0;i<n/2;i++){
        v3.push_back(v[i]+v2[i]);
    }
    ll j=n-1;
    for(int i=n/2;i<n;i++){
        v3.push_back(v[i]+v2[j]);
        j--;
    }
    sort(all(v3));
    cout<<v3[n/2]<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}