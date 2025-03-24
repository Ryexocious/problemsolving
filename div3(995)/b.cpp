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
    ll a,b,c,n,sum=0,co=0,d;
    cin>>n>>a>>b>>c;
    sum=a+b+c;
    co=(n/sum)*3;
    d=(n/sum)*sum;
    if(d>=n){
        cout<<co<<"\n";
    }
    else{
        if(d+a>=n){
            co+=1;
        }
        else if(d+a+b>=n){
            co+=2;
        }
        else{
            co+=3;
        }
        cout<<co<<"\n";
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