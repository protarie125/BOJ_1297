#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int D, H, W;
    cin >> D >> H >> W;

    double dRatio = sqrt(H * H + W * W);
    double realH = (D * H) / dRatio;
    double realW = (D * W) / dRatio;

    cout << static_cast<int>(realH) << ' ' << static_cast<int>(realW);

    return 0;
}