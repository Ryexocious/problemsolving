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
    ll n,k,x;
    cin>>n>>k>>x;
    vec v(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    if(sum*k<x){
        cout<<0<<"\n";
        return;
    }
    ll md=x%sum;
    ll d=x/sum;
    if(md==0){
        d--;
        md=sum;
    }
    ll res=n*k-d*n;
    sum=0;
    for(int i=n-1;i>=0;i--){
        sum+=v[i];
        if(sum>=md){
            break;
        }
        res--;
    }
    cout<<res<<"\n";

}
// can be done using binary search by making the whole n*k array then find the minimum l which will have invalid suffix sum

int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}