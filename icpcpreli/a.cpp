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
void solve(){
    ll n,k,x,y,res=0;
    cin>>n>>k;
    //vector<pair<int,int>>v
    for(int i=0;i<n;i++){
        cin>>x>>y;
        res+=k/x;

    }
    cout<<res<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    int j=1;
    while (j<=t){
        cout<<"Case "<<j<<": ";
        solve();
        j++;
        cout<<"\n";
    }   
}