#include "arraylib.h"

#include <cstddef>
#include <iomanip>
#include <iostream>

int main() {
    // Яркость пикселей изображения (0 — чёрный, 255 — белый)
    int brightness[] = {
        34, 128, 255, 76, 192,
        18, 144, 220, 96, 61,
        173, 245
    };
    const std::size_t n = sizeof(brightness) / sizeof(brightness[0]);

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Вариант 8. Яркость пикселей\n";
    std::cout << "Исходные данные:";
    for (std::size_t i = 0; i < n; ++i) {
        std::cout << ' ' << brightness[i];
    }
    std::cout << "\nКоличество пикселей: " << n << "\n\n";

    // Количество тёмных пикселей (яркость меньше 80) — такой функции
    // в библиотеке нет, поэтому считаем циклом
    int dark = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (brightness[i] < 80) {
            ++dark;
        }
    }

    std::cout << "Минимальная яркость: " << arr_min(brightness, n) << '\n';
    std::cout << "Максимальная яркость: " << arr_max(brightness, n) << '\n';
    std::cout << "Средняя яркость: " << arr_average(brightness, n) << '\n';
    std::cout << "Медиана яркости: " << arr_median(brightness, n) << '\n';
    std::cout << "Тёмных пикселей (яркость < 80): " << dark << '\n';

    return 0;
}