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
    ll n,k;
    cin>>n>>k;
    vec v(n),w(n);
    for(int i=0;i<n;i++){
        cin>>v[i]>>w[i];
    }
    vector<vec>dp(n,vec (k+1,-1));
    for(int i=0;i<=k;i++){
        if(i>=v[0]) dp[0][i] = w[0];
        else dp[0][i]=0;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<=k;j++){
            ll notake = dp[i-1][j];
            ll take = INT_MIN;
            if(v[i] <= j){
                take = dp[i-1][j-v[i]] + w[i];
            }
            dp[i][j] = max(take, notake);
        }
    }
    cout<<dp[n-1][k]<<"\n";
    
    
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }
}