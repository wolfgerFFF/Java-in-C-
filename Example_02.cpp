

#include <iostream>
#include "Priest.h"
#include "Magician.h"


int main()
{
    Priest* priest = new Priest("vitaliy", 7, 9);
    std::cout << priest->getInfo();
    delete priest;
    std::cout << "\n";

    Magician* magician = new Magician("uliy",41,6);
    std::cout << magician->getInfo();
    delete magician;

    std::cout << "\n";
    system("pause");
    return 0;
}
