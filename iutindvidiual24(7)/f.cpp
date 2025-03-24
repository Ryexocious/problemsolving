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
const ll mx=1e6+7;
double factco[mx];
void precal(){
    factco[0]=0;
    for(int i = 1;i<=mx;i++){
        factco[i]=factco[i-1]+log10(i);
    }
}
void solve(int c){
    ll n,k;
    cin>>n>>k;
    if(n==0 || n==1){
        cout<<"Case "<<c<<": 1" <<"\n";
        return;
    }
    ll d=factco[n]/(log10(k));
    cout<<"Case "<<c<<": "<<d+1<<"\n";
}
int main(){
    fast;
    int t;
    precal();
    cin>>t;
    for(int i=1;i<=t;i++){
        solve(i);
    }   
}