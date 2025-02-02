// 제목 : 다이얼

#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    std::string word;
    std::cin >> word;

    int time = 0;

    for (char& character : word) {
        switch (character) {
            case 'A':
            case 'B':
            case 'C':
                time += 3;
                break;
            case 'D':
            case 'E':
            case 'F':
                time += 4;
                break;
            case 'G':
            case 'H':
            case 'I':
                time += 5;
                break;
            case 'J':
            case 'K':
            case 'L':
                time += 6;
                break;
            case 'M':
            case 'N':
            case 'O':
                time += 7;
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                time += 8;
                break;
            case 'T':
            case 'U':
            case 'V':
                time += 9;
                break;
            default:
                time += 10;
                break;
        }
    }

    std::cout << time;
}
