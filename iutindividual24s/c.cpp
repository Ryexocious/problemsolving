#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<ll> vec;
typedef map<string,int> mp;
#define cy cout<<"Yes"<<endl;
#define cn cout<<"No"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pob pop_back
void solve(){
    ll n,x;
    cin>>n>>x;
    vec v(n),v2(n);
    for(int i=0;i<n;i++){
        cin>>v[i]>>v2[i];
    }
    vector<vector<bool>> dp(n+1,vector<bool>(x+1,false));
    dp[0][0]=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<=x;j++){
            if(dp[i][j]){
                if(j+v[i]<=x){
                    dp[i+1][j+v[i]]=true;
                }
                if(j+v2[i]<=x){
                    dp[i+1][j+v2[i]]=true;
                }
            }
        }
    }
    if(dp[n][x]){
        cy;
    }
    else{
        cn;
    }
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }
}