// 제목 : 수학은 비대면강의입니다

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int a, b, c, d, e, f;
    std::cin >> a >> b >> c >> d >> e >> f;

    std::cout << (c * e - b * f) / (a * e - b * d) << ' ' << (a * f - c * d) / (a * e - b * d);
}
