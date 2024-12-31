// 제목 : 더하기 사이클

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int sum = n;
    int count = 0;

    do {
        sum = sum % 10 * 10 + (sum / 10 + sum % 10) % 10;
        count++;
    } while (sum != n);

    std::cout << count;
}
