#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<ll> vec;
typedef map<char,int> mp;
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
    int co=0,co2=0;
    mp m;
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        m[x]++;
    }
    for(auto it : m){
        if(it.second==1){
            co++;
        }
        else if(it.second%2!=0){
            co2++;
        }
    }
    int chk=co-1+co2;
    if(chk>k){
        cn;
    }
    else{
        cy;
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