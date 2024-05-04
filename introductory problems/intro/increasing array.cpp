#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    vector<long long> v;

    // Read and store elements in the vector
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        v.push_back(element);
    }

    long long moves = 0;
    
    for (int i = 1; i < n; i++) {
        if (v[i] < v[i - 1]) {
            moves += v[i - 1] - v[i];
            v[i]=v[i-1];
        }
    }

    cout << moves;
    return 0;
}
