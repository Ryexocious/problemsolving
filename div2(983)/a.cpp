#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<ll> vec;
typedef map<int,int> mp;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mfor(i,n) for(int i=0;i<(n);i++)
#define rfor(i,n) for(int i=(n-1);i>0;i--)
void solve(){
    int n,x,co=0,co2=0,mx=0,min=0;
    cin>>n;
    for(int i=0;i<2*n;i++){
        cin>>x;
        if(x==0){
            co++;
        }
        else{
            co2++;
        }
    }
    if(co==0){
        min=mx=co2%2;
    }
    else if(co<=co2){
        min=co2%2;
        mx=co;
    }
    else{
        min=co2%2;
        mx=co2;
    }
    cout<<min<<" "<<mx<<'\n';
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}