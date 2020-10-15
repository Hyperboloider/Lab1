#include <iostream>

int main()
{   
    float a, n, d, result;
    std::cout << "перший член прогресії: ";
    std::cin >> a;
    std::cout << "різниця прогресії: ";
    std::cin >> d;
    std::cout << "номер шуканого числа: ";
    std::cin >> n;
    result = a+d*(n-1);
    std::cout << "шуканий член прогресії:" << result << std::endl;
    return 0;
}