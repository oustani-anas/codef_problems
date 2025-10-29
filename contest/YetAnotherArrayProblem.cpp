#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

// compute gcd of two numbers
int64 gcd64(int64 a, int64 b) {
    while (b) {
        int64 r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int64> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        // compute g = gcd of all a[i]
        int64 g = a[0];
        for(int i = 1; i < n; i++){
            g = gcd64(g, a[i]);
        }

        // now find smallest x ≥ 2 such that gcd(g, x) = 1
        // because if gcd(a[i], x) = 1 for some i, then x must not share any prime factor of that a[i].
        // But if g = gcd of all, then any prime dividing g divides all a[i],
        // so we must choose x which avoids all primes dividing g.

        int64 x = 2;
        while(true){
            if (gcd64(g, x) == 1){
                cout << x << "\n";
                break;
            }
            x++;
            // Theoretically x ≤ 10^18, but in practice we'll find small x quickly.
        }
    }

    return 0;
}
