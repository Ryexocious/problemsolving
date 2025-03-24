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
void solve() {
    ll n;
    cin>>n;
    vector<vector<char>> v(n,vector<char>(n,'.'));
    for (int i=1;i<= n;i++){
        ll j=n+1-i;
        if(i<=j){
            if(i%2==1){
                for(int k=i-1;k<j;k++){
                    for(int l=i-1;l<j;l++){
                        v[k][l]='#';
                    }
                }
            }
            else{
                for(int k=i-1;k<j;k++){
                    for(int l=i-1;l<j;l++){
                        v[k][l]='.';
                    }
                }
            }
        }
    }
    for(auto it : v){
        for(auto it2 : it){
            cout<<it2;
        }
        cout<<"\n";
    }
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }
}