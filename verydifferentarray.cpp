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
    ll n,m;
    cin>>n>>m;
    vec v(n),v2(m);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }
    sort(all(v));
    sort(v2.rbegin(),v2.rend());
    ll l=0,r=m-1,res=0;
    ll l2=0,r2=n-1;
    while(1){
        ll d=abs(v[l2]-v2[l]),d2=abs(v[r2]-v2[r]);
        if(l2==r2){
            res+=max(d,d2);
            break;
        }
        if(d>d2){
            l++;
            l2++;
        }
        else{
            r--;
            r2--;
        }
        res+=max(d,d2);
    }
    cout<<res<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}