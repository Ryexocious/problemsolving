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
void solve(){
    vec v(3);
    for(int i=0;i<3;i++){
        cin>>v[i];
    }
    sort(all(v));
    cout<<v[1]<<'\n';
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}