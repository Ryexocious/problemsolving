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
void solve() {
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    k--;
    bool x=true;
    for(int i=k-1;i>=0;i--){
        if(s[i] == '#'){ 
            x=false;
            break;
        }
    }
    bool x2=true;
    for(int i=k+1;i<n;i++){
        if(s[i]=='#'){ 
            x2=false;
            break;
        }
    }
    if(x && x2 || k==0 || k==n-1){
        cout<<1<<"\n";
        return;
    }
    ll l=k-1;
    // for(int i=k-1;i>=0;i--){
    //     if(s[i]=='#'){
    //         l=i;
    //         break;
    //     }
    // }
    ll r=-1;
    for(int i=k+1;i<n;i++){
        if(s[i]=='#'){
            r=i;
            break;
        }
    }
    ll l2=(l-0)+1;
    ll r2=((n-1)-r)+1;
    l=-1;
    for(int i=k-1;i>=0;i--){
        if(s[i]=='#'){
            l=i;
            break;
        }
    }
    r=k+1;
    // for(int i=k+1;i<n;i++){
    //     if(s[i]=='#'){
    //         r=i;
    //         break;
    //     }
    // }
    ll l3=(l-0)+1;
    ll r3=((n-1)-r)+1;
    cout<<min(max(l2,l3),max(r2,r3))+1<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}
