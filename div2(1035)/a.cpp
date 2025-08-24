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
    ll a,b,x,y;
    cin>>a>>b>>x>>y;
    if(a>b && ((a^1)>b)){
        cout<<-1<<"\n";
        return;
    }
    ll co=0,d=a,res=1e9+10;
    for(int i=1;i<101;i++){
        if(d==b){
            res=min(res,co);
            break;
        }
        ll c=d^1,d2,d3=b-d;
        d2=b-c;
        //cout<<d2<<" "<<d3<<"\n";
        if(d2<0){
            d2=1e9+10;
        }
        if(d3<0){
            d3=1e9+10;
        }
        if(d3==d2 && x<=y){
            d+=1;
            co+=x;
        }
        else if(d3==d2 && x>y){
            d^=1;
            co+=y;
        }
        else if(d3<d2){
            d+=1;
            co+=x;
        }
        else{
            d^=1;
            co+=y;
        }
    }
    ll co3=1e9+10;
    if(b>=a){
        co3=(b-a)*x;
    }
    cout<<min(res,co3)<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}