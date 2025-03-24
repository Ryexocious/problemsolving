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
multiset<int> a,b;
void solve(){
    int y,k;
    char x;
    cin>>x>>y>>k;
    if(x=='+'){
        a.insert(y);
        b.insert(k);
    }
    else{
        a.erase(a.lower_bound(y));
        b.erase(b.lower_bound(k));
    }
    if(a.empty()){
        cn;
    }
    else{
        auto it=a.end();
        auto it2=b.begin();
        if(*(--it)>*it2){
            cy;
        }
        else{
            cn;
        }
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