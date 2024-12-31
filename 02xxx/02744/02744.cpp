// 제목 : 대소문자 바꾸기

#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    std::string word;
    std::cin >> word;

    for (char& character : word) {
        std::cout << (char) (character + (character < 'a' ? 32 : -32));
    }
}
