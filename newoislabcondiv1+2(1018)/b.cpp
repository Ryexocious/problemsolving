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
    ll n,k,suml=0,sumr=0;
    cin>>n>>k;
    vec v(n),v2(n),v3(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
    ll res=0;
    for(int i=0;i<n;i++){
        v3[i]=min(v[i],v2[i]);
        res+=max(v[i],v2[i]);
    }
    sort(v3.rbegin(),v3.rend());
    for(int i=0;i<k-1;i++){
        res+=v3[i];
    }
    cout<<res+1<<"\n";
    //cout<<suml<<" "<<sumr<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}
