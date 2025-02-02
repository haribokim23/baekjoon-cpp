// 제목 : 두 수 비교하기

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int a, b;
    std::cin >> a >> b;

    std::cout << (a > b ? ">" : a < b ? "<" : "==");
}
