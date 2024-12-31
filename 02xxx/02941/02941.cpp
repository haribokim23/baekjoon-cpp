// 제목 : 크로아티아 알파벳

#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    std::string word;
    std::cin >> word;

    int count = 0;

    for (int index = 0, length = word.size(); index < length; index++, count++) {
        if (index == length - 1) {
            continue;
        }

        char& next = word[index + 1];

        switch (word[index]) {
            case 'c':
                if (next == '=' || next == '-') {
                    index++;
                }

                break;
            case 'd':
                if (next == '-') {
                    index++;
                } else if (index < length - 2 && next == 'z' && word[index + 2] == '=') {
                    index += 2;
                }

                break;
            case 'l':
            case 'n':
                if (next == 'j') {
                    index++;
                }

                break;
            case 's':
            case 'z':
                if (next == '=') {
                    index++;
                }

                break;
        }
    }

    std::cout << count;
}
