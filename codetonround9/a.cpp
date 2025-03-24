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
    int n;
    cin>>n;
    int j=2,k=2;
    for(int i=0;i<n;i++){
        if(i<=1){
            cout<<j<<" ";
        }
        else{
            cout<<j+2<<" ";
            j+=2;
        }
        if(i==0){
            j++;
        }
    }
    cout<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}