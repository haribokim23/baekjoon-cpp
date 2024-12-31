// 제목 : 단어의 개수

#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int count = 0;

    for (std::string word; std::cin >> word; count++) {}

    std::cout << count;
}
