#include <iostream>

int main() {
    int num1, num2;

    // Запрос на ввод первого числа
    std::cout << "First number: ";
    std::cin >> num1;

    // Запрос на ввод второго числа
    std::cout << "Second number: ";
    std::cin >> num2;

    // Вывод суммы введенных чисел
    std::cout << "Sum: " << num1 + num2 << std::endl;
    std::cout << "Diff: " << num1 - num2 << std::endl;
    return 0;
}