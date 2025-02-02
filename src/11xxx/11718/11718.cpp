// 제목 : 그대로 출력하기

#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    while (!std::cin.eof()) {
        std::string line;
        std::getline(std::cin, line);

        std::cout << line << '\n';
    }
}
