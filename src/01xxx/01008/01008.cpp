// 제목 : A/B

#include <iomanip>
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    double a, b;
    std::cin >> a >> b;

    std::cout << std::fixed << std::setprecision(10) << a / b;
}
