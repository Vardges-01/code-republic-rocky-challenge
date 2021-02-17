#include <iostream>

int main() 
{
    int a, b;
	std::cout << "Araji tiv: ";
	std::cin >> a;
	std::cout << "Erkrord tiv: ";
	std::cin >> b;
    for (int i = a; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            std::cout << "Amenamec Bajanarar = " << i << std::endl;
            break;
        }
    }
    return 0;
}
