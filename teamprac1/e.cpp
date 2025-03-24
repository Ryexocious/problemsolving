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
    int x1,y1,x2,y2,x3,y3,area;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int x4,y4;
    x4=x3+x1-x2;
    y4=y3-y2+y1;
    area=(abs(x1*y2+x2*y3+x3*y4+x4*y1-y1*x2-y2*x3-y3*x4-y4*x1))/2;
    cout<<x4<<" "<<y4<<" "<<area<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    int i=1;
    while (t--){
        cout<<"Case "<<i++<<": ";
        solve();
    }   
}