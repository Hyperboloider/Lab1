#include <iostream>

int main()
{   
    float a, n, d, result;
    std::cout << "перший член прогресії: ";
    std::cin >> a;
    std::cout << "різниця прогресії: ";
    std::cin >> d;
    std::cout << "номер шуканого члену: ";
    std::cin >> n;
    result = a+d*(n-1);
    std::cout << "шукане: " << result << std::endl;
    return 0;
}