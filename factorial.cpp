#include <iostream>

int factorial(int num)
{
    if (num == 1)
        return 1;

    return num * factorial(num - 1);
}

int main()
{
    int num = 4;
    int answer = factorial(num);
    std::cout << "Answer is: " << answer << std::endl;
    return 0;
}