// 제목 : 단어 공부

#include <cctype>
#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    std::string word;
    std::cin >> word;

    int counts[26] = {};
    int max_count = 0;
    bool is_unique = true;
    char max_character;

    for (char& character : word) {
        char uppercase = std::toupper(character);
        int& count = ++counts[uppercase - 'A'];

        if (count > max_count) {
            max_count = count;
            is_unique = true;
            max_character = character;
        } else if (count == max_count) {
            is_unique = false;
        }
    }

    std::cout << (is_unique ? max_character : '?');
}
