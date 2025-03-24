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
void solve(){
    int n,x;
    cin>>n;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int l=0;
    while(l!=n){
            cin>>x;
            char c;
            for(int i=0;i<x;i++){
            cin>>c;
            if(c=='D'){
                if(v[l]==9){
                    v[l]=0;
                }
                else{
                    v[l]++;
                }
            }
            else{
                v[l]=(v[l]-1);
                if(v[l]<0){
                    v[l]=9;
                }
            }
        }
        l++;
    }
    for(auto it : v){
        cout<<it<<" ";
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