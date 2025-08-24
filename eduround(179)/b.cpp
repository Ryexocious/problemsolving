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
vec fib={1,2,3,5,8,13,21,34,55,89};
void solve(){
    ll n,m;
    cin>>n>>m;
    ll mxw=fib[n-1],mxh=0,mxl=fib[n-1];
    for(int i=0;i<n;i++){
        mxh+=fib[i];
    }
    ll d2=fib[n-1]+fib[n-2];
    
    string res="";
    for(int i=0;i<m;i++){
        ll x,y,z;
        cin>>x>>y>>z;
        if(mxh<=z || mxh<=x || mxh<=y){
            if(x>=fib[n-1] && y>=fib[n-1] && z>=fib[n-1]){
                res+='1';
            }
            else{
                res+='0';
            }
        }
        else if(d2<=x || d2<=y || d2<=z){
            if(x>=fib[n-1] && y>=fib[n-1] && z>=fib[n-1]){
                res+='1';
            }
            else{
                res+='0';
            }
        }
        else{
            res+='0';
        }
    }
    cout<<res<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}