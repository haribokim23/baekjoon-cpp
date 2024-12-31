// 제목 : 중앙 이동 알고리즘

#include <cmath>
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::cout << (int) std::pow(std::pow(2, n) + 1, 2);
}
