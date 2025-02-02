// 제목 : 문자열

#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int t;
    std::cin >> t;

    while (t--) {
        std::string word;
        std::cin >> word;

        std::cout << word.front() << word.back() << '\n';
    }
}
