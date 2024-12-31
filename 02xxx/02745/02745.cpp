// 제목 : 진법 변환

#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    std::string n;
    int b;
    std::cin >> n >> b;

    std::cout << std::stoi(n, nullptr, b);
}
