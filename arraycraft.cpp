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
    int n,x,y,co=1;
    cin>>n>>x>>y;
    vec v(n);
    for(int i=y-2;i>=0;i--){
        if(co%2!=0){
            v[i]=-1;
        }
        else{
            v[i]=1;
        }
        co++;
    }
    co=1;
    for(int i=x;i<n;i++){
        if(co%2!=0){
            v[i]=-1;
        }
        else{
            v[i]=1;
        }
        co++;
    }
    for(int i=y-1;i<x;i++){
        v[i]=1;
    }
    for(auto it: v){
        cout<<it<<" ";
    }
    cout<<'\n';
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}