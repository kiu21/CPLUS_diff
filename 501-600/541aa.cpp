#include <algorithm>
#include <iostream>
using namespace std;
int H[3], W[3], ans = 0;
int main() {
  for (int i = 0; i < 3; i++) cin >> H[i];
  for (int j = 0; j < 3; j++) cin >> W[j];
  for (int a = 1; a <= 30; a++) {
    for (int b = 1; b <= 30; b++) {
      for (int d = 1; d <= 30; d++) {
        for (int e = 1; e <= 30; e++) {
          int c = H[0] - a - b;
          int f = H[1] - d - e;
          int g = W[0] - a - d;
          int h = W[1] - b - e;
          int i = W[2] - c - f;
          if (min({c, f, g, h, i}) > 0 and g + h + i == H[2]) ans++;
        }
      }
    }
  }
  cout << ans << "\n";
}
