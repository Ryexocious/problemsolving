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
void solve(int c){
    string s,s2;
    cin>>s>>s2;
    string res="";
    ll m=s.length(),n=s2.length();
    vector<vector<string>> dp(m + 1, vector<string>(n + 1));
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0||j==0) dp[i][j]="";
            else if(s[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1]+s[i-1];
            else if(dp[i-1][j].size()>dp[i][j-1].size()) dp[i][j]=dp[i-1][j];
            else if(dp[i-1][j].size()<dp[i][j-1].size()) dp[i][j]=dp[i][j-1];
            else if(dp[i-1][j]<dp[i][j-1]) dp[i][j]=dp[i-1][j];
            else dp[i][j]=dp[i][j-1];
        }
    }
    if(dp[m][n].size()==0){
        cout<<"Case "<<c<<": "<<":("<<"\n";
        return;   
    }
    cout<<"Case "<<c<<": "<<dp[m][n]<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve(i);
    }
}