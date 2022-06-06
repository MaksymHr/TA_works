#include <iostream>
#include <string>


std::string to_oct(int number, std::string res = "") {
    
    if (number < 8)
        return std::to_string(number);

    res = to_oct(number / 8) + std::to_string(number % 8);

    return res;
}


int max_digit_in_number(std::string number, int max = 0) {

    for (int i = 0; i < number.length(); i++) {
        char a[2] = { number[i] };
        if (atoi(a) > max) max = atoi(a);
    }
    return max;
}


int main() {
    int n;

    std::cout << "Input number: ";
    std::cin >> n;

    std::string n_oct = to_oct(n);

    std::cout << "Number in oct: " << n_oct << std::endl;
    std::cout << "Max digit: " << max_digit_in_number(n_oct);
    

    return 0;
}
