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
void solve(int c){
    ll n,d;
    cin>>n;
    d=(ll)sqrt(n)+(ll)sqrt(n/2);
    cout<<"Case "<<c<<": "<<n-d<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve(i);
    }   
}