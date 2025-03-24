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
    ll n,m,x;
    cin>>n>>m;
    priority_queue<ll,vector<ll>,greater<ll>>v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push(x);
    }
    for(int i=0;i<m;i++){
        cin>>x;
        //cout<<v.top()<<" ";
        v.pop();
        v.push(x);
        //cout<<v.top()<<" ";
    }
    //cout<<"\n";
    // while(!v.empty()){
    //     cout<<v.top()<<" ";
    //     v.pop();

    // }
    // cout<<"\n";
    ll sum=0;
    while(!v.empty()){
        sum+=v.top();
        v.pop();
    }
    cout<<sum<<'\n';
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}