#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<int> vec;
typedef map<string,int> mp;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pob pop_back
const int mx=1e6;
int dp[mx];
// int rescursion(vec &v,int n,int mq,int k){
//     if(n==mq-1) return 0;
//     if(dp[n]!=-1) return dp[n];
//     int cst=INT_MAX;
//     for(int i=1;i<=k;i++){
//         if(n+i<mq){
//             cst=min(cst,rescursion(v,n+i,mq,k)+abs(v[n]-v[n+i]));
//         }
//     }
//     return dp[n]=cst;
// }
void solve(){
    //memset(dp,INT_MAX,sizeof(dp));
    int n,k;
    cin>>n>>k;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    fill(dp, dp + mx, INT_MAX);
    //cout<<rescursion(v,0,n,k)<<"\n";
    dp[0]=0;
    for(int i=0;i<n-1;i++){
        for(int j=1;j<=k;j++){
            if(i+j<n){
                dp[i+j]=min(dp[i+j],dp[i]+abs(v[i]-v[i+j]));
            }
        }
    }
    cout<<dp[n-1]<<"\n";
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }   
}