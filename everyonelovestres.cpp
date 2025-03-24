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
    ll n;
    cin>>n;
    if(n==1 || n==3){
        cout<<-1<<"\n";
    }
    else if(n%2==0){
        string s="";
        for(int i=0;i<n-2;i++){
            s+='3';
        }
        s+="66";
        cout<<s<<"\n";
    }
    else{
        string s="";
        for(int i=0;i<n-5;i++){
            s+='3';
        }
        s+="36366";
        cout<<s<<"\n";
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