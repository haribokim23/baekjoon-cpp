// 제목 : 세 막대

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int a, b, c;
    std::cin >> a >> b >> c;

    int longest = a;

    if (b > longest) {
        longest = b;
    }

    if (c > longest) {
        longest = c;
    }

    int sum = a + b + c;

    std::cout << (longest < sum - longest ? sum : (sum - longest) * 2 - 1);
}
