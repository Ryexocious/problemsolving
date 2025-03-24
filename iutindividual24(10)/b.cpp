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
    int n,k,sum=0;
    cin>>n>>k;
    vec v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(all(v));
    for(int i=0;i<k;i++){
        sum+=v[i];
    }
    cout<<sum<<"\n";
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }   
}