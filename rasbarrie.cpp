#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<int> vec;
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
const ll mx= 10000;
void solve(){
    int n,k,res=mx,co=0;
    cin>>n>>k;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0){
            co++;
        }
        res=min(res,(k-(v[i]%k))%k);
    }
    if(k==4){
        res=min(res,max(0,2-co));
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