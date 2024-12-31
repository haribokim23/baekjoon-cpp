// 제목 : 아스키 코드

#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    std::string string;
    std::cin >> string;

    std::cout << (int) string[0];
}

// 문자열 없는 버전

/*
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    char character;
    std::cin >> character;

    std::cout << (int) character;
}
*/
