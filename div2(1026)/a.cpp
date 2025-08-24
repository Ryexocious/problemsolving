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
    sort(all(v));
    ll i=0,co=0,co2=0,j=n-1;
    while(i<n && (v[i]+v[n-1])%2!=0){
        i++;
        co++;
    }
    while(j>=0 && (v[j]+v[0])%2!=0){
        j--;
        co2++;
    }
    cout<<min(co,co2)<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}