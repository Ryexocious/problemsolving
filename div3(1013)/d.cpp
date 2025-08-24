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
    ll n,m,k;
    cin>>n>>m>>k;
    ll d=n*m*1LL,e;
    e=k/n;
    if(k%n!=0){
        e++;
    }
    //cout<<e<<"\n";
    ll rem=m-e;
    if(rem==0){
        cout<<e<<"\n";
    }
    else{
        ll x=e-rem;
        if(x<0 || rem==e-1){
            cout<<1<<"\n";
        }
        else{
            ll d=e/(rem+1);
            if(e%(rem+1)!=0){
                d++;
            }
            cout<<d<<"\n";
            // ll x2=e;
            // vec v(m,0);
            // ll i=0,l=m-1;
            // while(x2>0){
            //     v[i++]=1;
            //     x2--;
            //     if(x2<=0){
            //         break;
            //     }
            //     v[l--]=1;
            //     x2--;
            // }
            // ll mx=0,co=0;
            // for (int i=0;i<m;i++){
            //     if (v[i]==1){
            //         co++;
            //         mx=max(mx,co);
            //     } 
            //     else{
            //         co=0;
            //     }
            // }
            // cout<<mx<<"\n";
        }
    }
   
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}