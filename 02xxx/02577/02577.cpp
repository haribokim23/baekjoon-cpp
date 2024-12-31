// 제목 : 숫자의 개수

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int a, b, c;
    std::cin >> a >> b >> c;

    int counts[10] = {};

    for (int product = a * b * c; product; product /= 10) {
        counts[product % 10]++;
    }

    for (int& count : counts) {
        std::cout << count << '\n';
    }
}
