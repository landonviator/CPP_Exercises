#include <iostream>
#include <vector>
#include <string>

int factorialRecursion(int n){
    if (n >= 1){
        return n * factorialRecursion(n - 1);
    } else {
        return 1;
    }
}

int main()
{
    int userInput;
    std::cout << "\nWhat number would you like to factor?" << std::endl;
    std::cin >> userInput;

    int factoredNumber = factorialRecursion(userInput);
    std::cout << factoredNumber << std::endl;

    return 0;
}