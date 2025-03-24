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
void solve(){
    int n,res=0;
    cin>>n;
    vector<vec>v(n,vec(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int d=0,l=i,chk;
        chk=v[d][l];
        while(d<n&&l<n){
            chk=min(chk,v[d][l]);
            d++;
            l++;
        }
        if(chk<0){
            res+=abs(chk);
        }
        if(i>0){
            d=i,l=0;
            chk=v[d][l];
            while(d<n && l<n){
                chk=min(chk,v[d][l]);
                d++;
                l++;
            }
            if(chk<0) {
                res+=abs(chk);
            }
        }
    }
    cout<<res<<'\n';
    
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}