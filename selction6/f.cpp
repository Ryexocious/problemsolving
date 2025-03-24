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
const int mx=10000;
vec v(mx+1);
void fibo() {
    v[0]=0;
    v[1]=1;
    for (int i=2;i<mx;i++){
        v[i]=v[i-1]+v[i-2];
    }
}
void solve(){
    string n;
    cin>>n;
    ll len=n.length(),x=0;
    for(int i=0;i<len;i++){
        x=x*10+n[i]-'0';
    }
    auto it=find(all(v),x);
    if(it!=v.end()){
        cy;
    }
    else{
        cn;
    }
}
int main(){
    fast;
    fibo();
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}