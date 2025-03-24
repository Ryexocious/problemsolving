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
    int n,co=0;
    cin>>n;
    vec v(n+1),v3(n+1); 
    vec v2;
    for(int i=1;i<=n;++i) {
        cin>>v[i];
        v3[v[i]]=i;
        if(v[i]!=i) {
            v2.pb(i);
        }
    }
    for(int i=0;i<v2.size();++i){
        if(v[v[v2[i]]]!=v2[i]){
            int idx=v3[v2[i]];
            swap(v[v[v2[i]]],v[idx]);
            v3[v[idx]]=idx;
            v3[v[v[v2[i]]]]=v[v[v2[i]]];
            co++;
        }
    }
    cout<<co<<"\n";
}
int main(){
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }   
}
