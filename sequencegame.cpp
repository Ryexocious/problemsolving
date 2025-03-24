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
    vec v(n),v2;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    v2.pb(v[0]);
    if(n==1){
        cout<<1<<"\n";
        cout<<v2[0]<<"\n";
        return;
    }
    for(int i=1;i<n;i++){
        if(v[i]>=v[i-1]){
            v2.pb(v[i]);
        }
        else{
            v2.pb(v[i]);
            v2.pb(v[i]);
        }
    }
    cout<<v2.size()<<'\n';
    for(auto it: v2){
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