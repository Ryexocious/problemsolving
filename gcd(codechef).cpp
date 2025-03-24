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
    ll n, m, k = 0;
    cin >> n >> m;

    if (n == m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (j == k) {
                    cout << 3 << " ";
                } else {
                    cout << 2 << " ";
                }
            }
            cout << "\n";
            k++; 
        }
    } 
    else if (n > m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (k < m) {
                    if (j == k) {
                        cout << 3 << " ";
                    } else {
                        cout << 2 << " ";
                    }
                } else {
                    if (j == 0) {
                        cout << 3 << " ";
                    } else {
                        cout << 2 << " ";
                    }
                }
            }
            cout << "\n";
            k++;
        }
    } 
    else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (j == k) {
                    cout << 3 << " ";
                } else if (i == n - 1 && j > k) {
                    cout << 3 << " "; 
                } else {
                    cout << 2 << " ";
                }
            }
            cout << "\n";
            k++; 
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