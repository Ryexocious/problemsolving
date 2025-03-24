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
    vec v(n);
    string s="";
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(i<n-1){
            if(v[i]==0){
                s+='R';
            }
            else if(v[i]==1){
                s+="PR";
            }
            else{
                for(int j=0;j<v[i];j++){
                    s+="PRL";
                }
                s+="R";
            }
        }
        else{
            if(v[i]==1){
                s+="P";
            }
            else{
                for(int j=0;j<v[i];j++){
                    s+="PLR";
                }
            }
        }
    }
    cout<<s<<"\n";
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }   
}