//13. Обчислити n-ий член арифметичної 
#include <iostream>

int main()
{   
    float firstMember, difference, result;                                         //визначимо тип вхідних змінних та змінної результату
    int number;                                                                    //визничамо тип змінної номеру шуканого члена
    std::cout << "перший член прогресії (число): ";
    std::cin >> firstMember;                                                       //введення першого члену прогресії
    std::cout << "різниця прогресії (число): ";
    std::cin >> difference;                                                        //введення різниці прогресії
    std::cout << "номер шуканого члену (ціле число, більше за нуль): ";
    std::cin >> number;                                                            //введення номеру шуканого члену
    result = firstMember + difference * (number - 1);                              //обчислення шуканого члену
    std::cout << "шукане: " << result << std::endl;                                //виведення шуканого
    return 0;
}