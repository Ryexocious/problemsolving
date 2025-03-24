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
void solve(int c){
    int n;
    cin>>n;
    vector<vector<int>>v(n);
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        vector<int>temp(26);
        for(char c: s){
            temp[c-'a']++;
        }
        v[i]=temp;
    }
    cout<<"Case "<<c<<":"<<"\n";
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        string s;
        ll co=0;
        cin>>s;
        vector<int>temp(26);
        for(char c: s){
            temp[c-'a']++;
        }
        for(vector<int> v2 : v){
            bool x=true;
            for(int i=0;i<26;i++){
                if(temp[i]<v2[i]){
                    x=false;
                }
            }
            if(x){
                co++;
            }
        }
        cout<<co<<"\n";
    }
}
int main(){
    fast;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve(i);
    }   
}