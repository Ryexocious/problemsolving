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
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mfor(i,n) for(int i=0;i<(n);i++)
#define rfor(i,n) for(int i=(n-1);i>0;i--)
void solve(){
    ll n,k,x,y,res=0;
    cin>>n>>k;
    vec v(k+1,0);
    for(int i=0;i<k;i++){
        cin>>x>>y;
        //cout<<x<<y;
        v[x]=v[x]+y;
    }
    sort(all(v));
    int l=0;
    for(int i=k;i>0;i--){
        if(l==n){
            break;
        }
        res+=v[i];
        l++;
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
