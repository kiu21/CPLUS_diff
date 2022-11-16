#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    vector<pair<int, int>> ball;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        count += 1;
        if (ball.empty() or ball.back().first != a) {
            ball.emplace_back(a, 1);
        } else {
            ball.back().second += 1;
            if (ball.back().second == a) {
                count -= a;
                ball.pop_back();
            }
        }
        cout << count << '\n';
    }
}