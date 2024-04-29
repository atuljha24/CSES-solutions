#include <bits/stdc++.h>
using namespace std;
#define a first
#define b second
#define pb push_back
typedef long long int ll;
#define endl '\n'
int main() {
    ll n, m, k;
    cin >> n >> m >> k;
    int a[n], b[m];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    int cnt = 0;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (abs(a[i] - b[j]) <= k) {
            cnt++;
            i++;
            j++;
        } else if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
    }
    cout << cnt << endl;
}
