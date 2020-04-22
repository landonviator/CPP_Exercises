#include <iostream>
#include <vector>
#include <string>

int fibonachiElementPlace(const int &n){
    if (n >= 3){
        return fibonachiElementPlace(n - 1) + fibonachiElementPlace(n - 2);
    } else {
        return 1;
    }
}

int main()
{
    int userInput;
    std::cout << "\nWhat index in the Fibonachi sequence do you want? ";
    std::cin >> userInput;
    int fibValueAtIndex = fibonachiElementPlace(userInput);
    std::cout << fibValueAtIndex << "\n" << std::endl;

    return 0;
}