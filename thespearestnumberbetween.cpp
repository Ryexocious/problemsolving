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
    ll a,b,d=1,co=1;
    cin>>a>>b;
    if(a==b){
        cout<<a<<"\n";
        return;
    }
    while(d<=b){
        if(d>=a && d<=b){
            cout<<d<<"\n";
            return;
        }
        d=1<<co;
        co++;
    }
    if(a%2==0){
        cout<<a<<"\n";
    }
    else{
        cout<<a+1<<"\n";
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