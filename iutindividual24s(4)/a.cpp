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
    string s;
    cin>>s;
    ll len=s.length();
    ll a=-1,a2=-1,b=-1,b2=-1,c=-1,d=-1;
    for(int i=len-1;i>0;i--){
        if(s[i]=='0' && a<0){
            a=i;
        }
        if(s[i]=='5' && b<0){
            b=i;
        }
    }
    for(int i=a-1;i>=0;i--){
        if(s[i]=='0' && a2<0){
            a2=i;
        }
        if(s[i]=='5' && b2<0){
            b2=i;
        }
    }
    for(int i=b-1;i>=0;i--){
        if(s[i]=='2' && c<0){
            c=i;
        }
        if(s[i]=='7' && d<0){
            d=i;
        }
    }
    ll res=1e9+5;
    //cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<a2<<" "<<b2<<"\n";
    if(a!=-1 && a2!=-1){
        ll af=a-a2-1+s.length()-a;
        res=min(res,af);
    }
    if(a!=-1 && b2!=-1){
        ll bf=a-b2-1+s.length()-a;
        res=min(res,bf);
    }
    if(b!=-1 && d!=-1){
        ll cf=b-d-1+s.length()-b;
        res=min(res,cf);
    }
    if(b!=-1 && c!=-1){
        ll df=b-c-1+s.length()-b;
        res=min(res,df);
    }
    cout<<res-1<<"\n";

}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}