// 제목 : 팰린드롬인지 확인하기

#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    std::string word;
    std::cin >> word;

    for (int index = 0, length = word.size(); index < length / 2; index++) {
        if (word[index] != word[length - index - 1]) {
            std::cout << 0;
            return 0;
        }
    }

    std::cout << 1;
}
