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
    ll n,s;
    cin>>n>>s;
    ll sum=0;
    vec v(n),v2(3);
    for(int i=0;i<n;i++){
        cin>>v[i];
        v2[v[i]]++;
        sum+=v[i];
    }
    if(sum==s){
        cout<<-1<<"\n";
        return;
    }
    if(sum<s){
        ll d=s-sum;
        if(d>1){
            cout<<-1<<"\n";
            return;
        }
    }
    while(v2[0]--){
        cout<<0<<" ";
    }
    while(v2[2]--){
        cout<<2<<" ";
    }
    while(v2[1]--){
        cout<<1<<" ";
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