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
    int n,d,h,res=0;
    cin>>n>>d>>h;
    vec v(n);
    bool x=false;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]>0){
            res+=v[i];
        }
        if(res>h){
            x=true;
        }
        if(v[i]==0){
            res-=d;
            if(res<0){
                res=0;
            }
        }
    }
    if(x){
        cy;
    }
    else{
        cn;
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