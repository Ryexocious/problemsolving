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
    ll n,a,b,x=0,y=0;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    for(int j=0;j<1000;j++){
        for(int i=0;i<n;i++){
            if(s[i]=='N'){
                y++;
            }
            else if(s[i]=='S'){
                y--;
            }
            else if(s[i]=='E'){
                x++;
            }
            else if(s[i]=='W'){
                x--;
            }
            if(x==a && y==b){
                cy;
                return;
            }
        }
    }
    cn;
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}