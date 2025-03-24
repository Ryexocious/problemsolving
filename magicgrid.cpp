#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
typedef map<string, int> mp;
#define cy cout << "YES" << endl;
#define cn cout << "NO" << endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pob pop_back
vector<bool> sieve(int limit) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= limit; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}
pair<int, int> findTwoPrimesForSum(int n) {
    int target = n * n;
    vector<bool> isPrime = sieve(target);
    for (int i = target / 2; i >= 2; i--) {
        if (isPrime[i] && isPrime[target - i]) {
            return {i, target - i};
        }
    }
    return {-1, -1};
}
vector<int> findAllPrimes(int limit) {
    vector<int> primes;
    vector<bool> isPrime = sieve(limit);
    for (int i = 2; i <= limit; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}
void solve() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << "1\n";
        return;
    } else if (n == 2) {
        cout << "3 3\n3 1\n";
        return;
    }
    int maxNumber = n * n;
    vector<int> primes = findAllPrimes(maxNumber);
    int a, b, c;
    bool found = false;
    for (int i = 0; i < primes.size(); i++) {
        for (int j = i + 1; j < primes.size(); j++) {
            if (primes[i] + primes[j] == maxNumber) {
                a = primes[i];
                b = primes[j];
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (!found) {
        for (int i = 0; i < primes.size(); i++) {
            for (int j = i + 1; j < primes.size(); j++) {
                for (int k = j + 1; k < primes.size(); k++) {
                    if (primes[i] + primes[j] + primes[k] == maxNumber) {
                        a = primes[i];
                        b = primes[j];
                        c = primes[k];
                        found = true;
                        break;
                    }
                }
                if (found) break;
            }
            if (found) break;
        }
    }
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    int cnta = a, cntb = b, cntc = c;
    int tmp = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (cnta && __gcd(i + 1, a) == 1 && __gcd(j + 1, a) == 1) {
                matrix[i][j] = a;
                cnta--;
            } else if (cntb && __gcd(i + 1, b) == 1 && __gcd(j + 1, b) == 1) {
                matrix[i][j] = b;
                cntb--;
            } else if (cntc && __gcd(i + 1, c) == 1 && __gcd(j + 1, c) == 1) {
                matrix[i][j] = c;
                cntc--;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j];
            if (j != n - 1) cout << " ";
        }
        cout << "\n";
    }
}

// Main function
int main() {
    fast;
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}

