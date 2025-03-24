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
//string s="abcdefghijklmnopqrstuvwxyz";
int ar[1001];
const ll mx= 1000;
void solve(){
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d;
    if(a==c && b==d){
        cout<<0<<"\n";
        return;
    }
    e=a+b;
    f=c+d;
    if(e%2==0 && f%2==0){
        cout<<2<<"\n";
    }
    else if(e%2!=0 && f%2!=0){
        cout<<2<<"\n";
    }
    else{
        cout<<1<<"\n";
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