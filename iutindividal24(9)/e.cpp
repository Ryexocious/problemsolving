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
    string s;
    cin>>s;
    char s2;
    for(int i=0;i<s.length();i++){
        if(i==0){
            cout<<"Mike"<<"\n";
            s2=s[i];
        }
        else{
            if(s2<s[i]){
                cout<<"Ann"<<"\n";
            }
            else{
                cout<<"Mike"<<"\n";
                s2=s[i];
            }
        }
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

