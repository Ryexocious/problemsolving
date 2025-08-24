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
    ll n;
    cin>>n;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vec p(n,-1);
    for(int i=1;i<n;i++){
        p[i]=p[i-1];
        if(v[i]!=v[i-1]){
            p[i]=i-1;
        }
    }

    ll q;
    cin>>q;
    while(q--){
        ll l,r;
        cin>>l>>r;
        l--;r--;
        if(p[r]<l){
            cout<<"-1 -1\n";
        } 
        else{
            cout<<p[r]+1<<" "<<r+1<<"\n";
        }
    }
    cout<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}