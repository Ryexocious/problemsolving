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
void solve(long double x){
    long double res;
    res=x*x*x;
    res=sqrt(res)/(12*sqrt(2));
    cout<<fixed<<setprecision(4)<<res;
}
int main(){
    fast;
    long double n;
    while (cin>>n){
        if(n==-1){
            break;
        }
        solve(n);
        cout<<"\n";
    }     
}