#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<ll> vec;
typedef map<int,int> mp;
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
const int N=1e6+1;
vector<bool>p(N,false);
vec v(N,0); 
vec v2(N,0);
void primefactorco() {
    p[0]=p[1]=false;
    for(int i=2;i<N;i++) {
        p[i]=true;
    }
    for(int i=2;i<N;i++) {
        if(p[i]==true) {
            v[i]=i; 
            for(int j=2*i;j<N;j+=i) {
                p[j]=false;
                if(v[j]==0){ 
                    v[j]=i; 
                }
            }
        }
    }
    v2[0]=0;
    v2[1]=0;
    for (int i=2;i<N;i++) {
        mp m;
        int d=i;
        while(d>1) {
            int x=v[d];
            while(d%x==0) {
                d/=x;
                m[x]++;
            }
        }
        v2[i] = m.size(); 
    }
}
void solve(){
    ll n,k,res=0;
    cin>>n>>k;
    for(int i=n;i<k;i++){
        res+=v2[i];
    }
    cout<<res<<"\n";
}
int main(){
    fast;
    primefactorco();
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}