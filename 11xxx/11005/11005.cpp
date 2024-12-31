// 제목 : 진법 변환 2

#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n, b;
    std::cin >> n >> b;

    std::string number = "";

    while (n) {
        int remainder = n % b;

        if (remainder < 10) {
            number.insert(0, std::to_string(remainder));
        } else {
            number.insert(0, 1, (char) ('A' + remainder - 10));
        }

        n /= b;
    }

    std::cout << number;
}
