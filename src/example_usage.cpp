#include <iostream>
#include "time_utils.h"

int main() {
    Time t(2025, 10, 3, 14, 5, 9);

    std::cout << t.format("YYYY-MO-DD HH:MM:SS") << "\n";   // 2025-10-03 14:05:09
    std::cout << t.format("DD/HH:MM") << "\n";              // 03/14:05
    std::cout << t.format("HH hours, MM minutes") << "\n";  // 14 hours, 05 minutes

    return 0;
}
