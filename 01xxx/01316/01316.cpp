// 제목 : 그룹 단어 체커

#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int count = 0;

    while (n--) {
        std::string word;
        std::cin >> word;

        char previous = ' ';
        bool are_used[26] = {};
        bool is_group_word = true;

        for (char& current : word) {
            if (current == previous) {
                continue;
            }

            bool& is_used = are_used[current - 'a'];

            if (is_used) {
                is_group_word = false;
                break;
            }

            is_used = true;
            previous = current;
        }

        if (is_group_word) {
            count++;
        }
    }

    std::cout << count;
}
