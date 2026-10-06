#include "arraylib.h"
#include <cstddef>
#include <iostream>

int main() {
    int data[] = {5, 3, 8, 1, 9, 2};
    const std::size_t n = sizeof(data) / sizeof(data[0]);
    std::cout << "Массив:";
    for (std::size_t i = 0; i < n; ++i) {
        std::cout << ' ' << data[i];
    }
    std::cout << "\nКоличество элементов: " << n << '\n';
    std::cout << "Сумма: " << arr_sum(data, n) << '\n';
    std::cout << "Максимум: " << arr_max(data, n) << '\n';
    std::cout << "Минимум: " << arr_min(data, n) << '\n';
    std::cout << "Среднее: " << arr_average(data, n) << '\n';
    std::cout << "Положительных: " << arr_count_positive(data, n) << '\n';
    std::cout << "Отрицательных: " << arr_count_negative(data, n) << '\n';
    std::cout << "Нулей: " << arr_count_zero(data, n) << '\n';
    std::cout << "Произведение: " << arr_product(data, n) << '\n';
    std::cout << "Медиана: " << arr_median(data, n) << '\n';
    return 0;
}










