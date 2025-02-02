// 제목 : 문자와 문자열

#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    std::string s;
    std::cin >> s;

    int i;
    std::cin >> i;

    std::cout << s[i - 1];
}
