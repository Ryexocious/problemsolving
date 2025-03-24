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
    int n;
    cin>>n;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v.at(i);
    }
    int l=1,co=0;
    for(int i=0;i<n;i++){
        l=v.at(l-1);
        co++;
        cout<<l<<"\n";
        if(l==2){
            cout<<co<<"\n";
            return;
        }
    }
    cout<<-1<<"\n"; 
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }   
}