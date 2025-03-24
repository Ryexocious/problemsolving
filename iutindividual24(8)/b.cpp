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
    int n,m,c,co=0;
    cin>>n>>m>>c;
    vector<vector<int>>v(n,vector<int>(m));
    vector<int>v2(m);
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    for(int i=0;i<n;i++){
        ll sum=0;
        for(int j=0;j<m;j++){
            sum+=(v[i][j]*v2[j]);
        }
        sum+=c;
        if(sum>0){
            co++;
        }
    }
    cout<<co<<"\n"; 
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }   
}