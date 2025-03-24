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
    int n;
    cin>>n;
    vec v(n),res(n,-1);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<pair<int,int>>diff_idx;
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            diff_idx.pb({v[i-1]-v[i],i+1});
        }
    }
    sort(diff_idx.rbegin(),diff_idx.rend());
    ll idx=n-1;
    for(auto it:diff_idx){
        res[idx--]=it.second;
    }
    for(int i=0;i<n;i++){
        if(res[i]==-1){
            res[i]=1;
        }
    }
    for(auto it:res){
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