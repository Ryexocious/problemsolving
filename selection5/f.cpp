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
//string s="abcdefghijklmnopqrstuvwxyz";
int ar[1001];
const ll mx= 1000;
void solve(){
    ll n,k;
    cin>>n>>k;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vec res;
    multiset<ll> x;
    for (int i = 0; i < k; ++i) {
        x.insert(v[i]);
    }
    auto it=x.begin();
    advance(it,(k+1)/2-1);
    res.push_back(*it); 
    for (int i=k;i<v.size();i++) {
        x.insert(v[i]); 
        x.erase(x.find(v[i-k]));
        it=x.begin();
        advance(it,k/2); 
        res.push_back(*it);
    }
    for(auto it: res){
        cout<<it<<" ";
    }
    cout<<"\n";
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }   
}