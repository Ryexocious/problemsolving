#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<ll> vec;
typedef map<int,int> mp;
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
//string s="abcdefghijklmnopqrstuvwxyz";
void solve() {
    ll n,res=0;
    cin>>n;
    vec v,v2;
    mp x,y,x2;
    for(int i=0;i<n;i++){
        int j,k;
        cin>>j>>k;
        if(k==1){
            v.pb(j);
            x2[j]++;
        }
        else{
            v2.pb(j);
            x[j]++;
        }
        y[k]++;
    }
    if(y.size()==1){
        cout<<0<<"\n";
        return;
    }
    else{
        for(auto it : v){
            if(x[it]){
                res+=n-2;
            }
        }
        for(auto it : v){
            if(x[it+1] && x[it-1]){
                res++;
            }
        }
        for(auto it : v2){
            if(x2[it-1] && x2[it+1]){
                res++;
            }
        }
        
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