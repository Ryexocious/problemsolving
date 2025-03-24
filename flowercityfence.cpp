#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<ll> vec;
typedef map<int,int> mp;
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
    vec v(n+1);
    for(int i=1;i<=n;i++){ 
        cin>>v[i];
    }       
    if(v[1]!=n){
        cn;
        return;
    }
    mp cnt;
    for(int i=1;i<=n;i++){
        cnt[v[i]]++;
    }
    // for(auto it: cnt){
    //     cout<<it.first<<" "<<it.second<<"\n";
    // }
    for(int i=n-1;i>=1;i--){
        cnt[i]+=cnt[i+1]; 
    }
    for(auto it: cnt){
        cout<<it.first<<" "<<it.second<<"\n";
    }
    bool fl=true;
    for(int i=1;i<=n;i++){
        if(cnt[i]!=v[i]){
            fl=false;
            break;
        }
    }
    if(fl){
        cy;
    }
    else{
        cn;
    }
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}