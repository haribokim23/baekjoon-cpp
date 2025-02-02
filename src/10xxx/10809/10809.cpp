// 제목 : 알파벳 찾기

#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    std::string s;
    std::cin >> s;

    int indices[26] = {};

    for (int& index : indices) {
        index = -1;
    }

    for (int index = s.size() - 1; index >= 0; index--) {
        indices[s[index] - 'a'] = index;
    }

    for (int& index : indices) {
        std::cout << index << ' ';
    }
}
