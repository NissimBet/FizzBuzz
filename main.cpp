#include <iostream>

/**
 * print Fizz for numbers between [s,e] divisible by 3 and buzz by those divisible by 5
 * @param s <code>int</code> start number
 * @param e <code>int</code> end number
 */
void fizzBuzz(int s, int e) {
    std::string fizz = "Fizz", buzz = "Buzz";
    while(s <= e) {
        if(s % 3 != 0 && s % 5 != 0) {
            std::cout << s;
        }
        else {
            if(s % 3 == 0) {
                std::cout << fizz;
            }
            if(s % 5 == 0) {
                std::cout << buzz;
            }
        }

        std::cout << " ";
        s++;
    }
    std::cout << std::endl;

}

int main() {
    int begin = 1;
    int end = 100;

    fizzBuzz(begin, end);

    return 0;
}