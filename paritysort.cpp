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
    int n;
    cin>>n;
    vec v(n),v2(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        v2[i]=v[i];
    }
    sort(all(v2));
    for(int i=0;i<n;i++){
        if(v[i]%2!=v2[i]%2){
            cn;
            return;
        }
    }
    cy;
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}