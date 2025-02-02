// 제목 : 영수증

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int x, n;
    std::cin >> x >> n;

    int sum = 0;

    while (n--) {
        int a, b;
        std::cin >> a >> b;

        sum += a * b;
    }

    std::cout << (x == sum ? "Yes" : "No");
}
