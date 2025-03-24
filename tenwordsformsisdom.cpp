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
//string s="abcdefghijklmnopqrstuvwxyz";
int ar[1001];
const ll mx= 1000;
void solve(){
    mp m;
    int n,x,y,grt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(x<=10){
            grt=max(grt,y);
        }
        m[y]=i;
    }
    cout<<m[grt]+1<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}