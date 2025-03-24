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
    int n,x; 
    cin>>n>>x;
    vec v(n),v2(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
        if(v[i]<n){ 
            v2[v[i]]++;
        } 
    }
    int cur=0;
    for(int i=0;i<n;i++){
        if(!v2[i]) {
            break;
        } 
        cur++;
        int d = v2[i] - 1;
        if(i+x<n){
            v2[i + x]+=d;
        }
    }
    cout<<cur<<'\n';
    
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}