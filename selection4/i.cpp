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
    ll n,m,k,l,res=0,res1=1e9;
    ll p;
    cin>>n>>m>>k;
    if((n*m)==k){
        cout<<0<<"\n";
        return;
    }
    if (k == max(n,m)){
        int q = max(n,m);
        res1 = q*q;
    }
    // ll x=(n*m)%k;
    // l=min(n,m);
    // if((x<=l)){
    //     k=(n*m)%k;
    // }
    //else{
    while(k>0){
            l=min(n,m);
            // cout<<l<<endl;
            // cout<<res<<endl;
            p=ceil(((float)k/(float)l));
            // cout<<p<<endl;
            if((l*p)!=(n*m)){
                if(k == 1){
                    res = res;
                }
                else{
                res+=l*l;}
                // cout << 'a' << endl;
            }
            n=l;
            m=p;
            if(k==1){
                l=min(n,m);
                res+=l*l;
                // cout << "b" << endl;
                // break;
            }
            k=(n*m)%k;
            // cout<<n<<m<<k<<"\n";
        }
    //}
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