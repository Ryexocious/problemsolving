#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<int> vec;
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
ll gcd(ll a,ll b){
    if(a==0){
        return b;
    }
    else{
        return gcd(a%b,a);
    }
}
void solve(){
    int n,m,G=0,co=0,l=0;
    cin>>n>>m;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        G=gcd(v[i],G);
    }
    for(int i=0;i<n;i++){
        l=gcd(v[i],l);
        if(l==G){
            l=0;
            co++;
        }
    }
    if(co>=m){
        cy;
    }
    else{
        cn;
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