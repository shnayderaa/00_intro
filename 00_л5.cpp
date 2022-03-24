

#include <iostream>

int main()
{
    std::cout << "Vvedite a, b c i d: ";
    int a, b, c, d;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    std::cout << (a + b) * (a + b) * (a + b) << ' ' << (c - d) * (c - d) * (c - d) * (c - d) << "\n";
    std::cout << (a + 2 * a * b + b) * (a + 2 * a * b + b) << ' ' << (c - 3 * c * d * d + 5) * (c - 3 * c * d * d + 5) << " " << 6 * (b * b - 4 * a * c) * (b * b - 4 * a * c) << "\n";
    return 0;
}

