// 제목 : 달팽이는 올라가고 싶다

#include <cmath>
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int a, b, v;
    std::cin >> a >> b >> v;

    std::cout << std::fixed << (int) std::ceil((v - a) / (a - b)) + 1;
}
