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
    string s;
    cin>>s;
    vec va,vb;
    bool a1=false,b1=false,an=false,bn=false;
    ll coA=0,cob=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            if(i+1==1){
                a1=true;
            }
            if(i+1==n){
                an=true;
            }
            coA++;
            va.pb(i+1);
        }
        else{
            if(i+1==1){
                b1=true;
            }
            if(i+1==n){
                bn=true;
            }
            cob++;
            vb.pb(i+1);
        }
    }
    sort(all(va));
    sort(all(vb));
    if(a1 && an){
        cout<<"Alice\n";
    }
    else if(b1 && bn){
        cout<<"Bob\n";
    }
    else if(a1 && bn){
        if(cob>1){
            cout<<"Bob\n";
        }
        else{
            cout << "Alice\n";
        }
    }
    else if(b1 && an){
        if(coA<=1){
            cout<<"Bob\n";
        }
        else if(cob<=1 && coA>1){
            cout<<"Alice\n";
        }
        else{
            if(va[va.size()-2]>vb[vb.size()-1]){
                cout<<"Alice\n";
            }
            else{
                cout<<"Bob\n";
            }
        }
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
