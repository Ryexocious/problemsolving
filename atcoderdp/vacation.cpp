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
ll const mx=1e5+5;
ll dp[mx][3];
ll recursion(vector<vector<ll>>&v,ll lact,ll mq,ll n){
    if(n==mq) return 0;
    if(dp[n+1][lact]!=-1) return dp[n+1][lact];
    ll res=0;
    if(lact!=0){
        res=max(res,recursion(v,0,mq,n+1)+v[n][0]);
    }
    if(lact!=1){
        res=max(res,recursion(v,1,mq,n+1)+v[n][1]);
    }
    if(lact!=2){
        res=max(res,recursion(v,2,mq,n+1)+v[n][2]);
    }
    return dp[n+1][lact]=res;
}
void solve(){
    ll n,a,b,c;
    cin>>n;
    vector<vector<ll>> v(n);
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++){
        vector<ll>temp(3);
        for(int i=0;i<3;i++){
            cin>>temp[i];
        }
        v[i]=temp;
    }
    // for(auto it: v){
    //     for(auto it2: it){
    //         cout<<it2<<" ";
    //     }
    //     cout<<"\n";
    // }
    cout<<recursion(v,-1,n,0)<<"\n";
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }   
}