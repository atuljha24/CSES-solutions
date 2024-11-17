#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    ll a[n];
    ll b[m];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(a, a + n);

    vector<bool> used(n, false); // Boolean array to mark used elements from a

    for (int i = 0; i < m; i++) {
        ll ans = -1;
        for (int j = 0; j < n; j++) {
            if (!used[j] && b[i] - a[j] >= 0) { // Check if a[j] is not used and b[i] - a[j] is non-negative
                ans = a[j];
                used[j] = true; // Mark a[j] as used
            } else if (b[i] - a[j] < 0) {
                break;
            }
        }
        cout << ans << endl;
    }
}
