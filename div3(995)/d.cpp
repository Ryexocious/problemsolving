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
    ll n,x,y,co=0,sum=0;
    cin>>n>>x>>y;
    vec v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
        sum+=v[i];
    }
    ll lowchk=sum-y,hichk=sum-x;
    sort(all(v));
    for(int i=0;i<n;i++){
        auto l=lower_bound(v.begin()+i+1,v.end(),lowchk-v[i]);
        auto h=upper_bound(v.begin()+i+1,v.end(),hichk-v[i]);
        co+=(h-l);
    }
    cout<<co<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}



