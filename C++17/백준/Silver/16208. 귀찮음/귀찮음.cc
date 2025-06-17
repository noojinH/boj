#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    ll sum = 0;
    ll ans = 0;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) {
        ans += arr[i] * (sum - arr[i]);
        sum -= arr[i];
    }

    cout << ans;
}