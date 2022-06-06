#include <iostream>
#include <string>

bool its_palindrome(std::string line) {

    if (line.length() == 1 || line.length() == 0)
        return true;

    if (line[0] == line[line.length() - 1]) {
        line.erase(line.begin()); line.erase(line.end());
        its_palindrome(line);
    }
    else
        return false;

}

int main() {

    std::string line;

    std::cout << "Input string: ";
    std::cin >> line;

    if (its_palindrome(line))
        std::cout << "YES\n";
    else
        std::cout << "NO\n";

    return 0;
}
