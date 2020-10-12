#include <iostream>

float main()
{   
    float а;
    std::cout << "перший член прогресії: ";
    std::cin >> a;
    float d;
    std::cout << "різниця прогресії: ";
    std::cin >> d;
    float n;
    std::cout << "номер шуканого числа: ";
    std::cin >> n;
    float result;
    result = a+d*(n-1);
    std::cout << "Шукане значення: " << age << std::endl;
    return 0;
}