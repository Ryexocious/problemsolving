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
    int n;
    cin>>n;
    vec v(n-1);
    vec v2;
    for(int i=0;i<n-1;i++){
        cin>>v[i];
    }
    v2.pb(v[0]);
    for(int i=0;i<n-2;i++){
        v2.pb(min(v[i],v[i+1]));
    }
    v2.pb(v[n-2]);
    for(auto it:v2){
        cout<<it<<" ";
    }
    cout<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}