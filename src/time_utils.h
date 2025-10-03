#ifndef TIME_UTILS_H
#define TIME_UTILS_H

#include <string>
#include <sstream>  // Convert numbers to strings
#include <iomanip>  // Formatting with leading zeros

// Represents a structured time with years, months, days, hours, minutes, and seconds
struct Time {
    int years;    // YYYY
    int months;   // MO
    int days;     // DD
    int hours;    // HH
    int minutes;  // MM
    int seconds;  // SS

    // Creates a Time object with default values of 0
    // Example: Time t(0, 0, 5, 12, 34, 56) -> 0 years, 0 months, 5 days, 12 hours, 34 minutes, 56 seconds
    // Example: Time t(5, 12, 34, 56) -> 5 years, 12 months, 34 days, 56 hours
    Time(int y=0, int mo=0, int d=0, int h=0, int m=0, int s=0)
        : years(y), months(mo), days(d), hours(h), minutes(m), seconds(s) {}

    // Formats this Time object into a string according to the given pattern
    // Supported placeholders: YYYY, MO, DD, HH, MM, SS
    // Example: "DD:HH:MM:SS" -> "05:12:34:56"
    std::string format(const std::string& pattern) const {
        std::ostringstream oss;

        for (size_t i = 0; i < pattern.size(); i++) {
            if (pattern[i] == 'Y' && i+3 < pattern.size() &&
                pattern[i+1] == 'Y' && pattern[i+2] == 'Y' && pattern[i+3] == 'Y') {
                oss << std::setw(4) << std::setfill('0') << years;
                i += 3;
            }
            else if (pattern[i] == 'M' && i+1 < pattern.size() && pattern[i+1] == 'O') {
                oss << std::setw(2) << std::setfill('0') << months;
                i++;
            }
            else if (pattern[i] == 'D' && i+1 < pattern.size() && pattern[i+1] == 'D') {
                oss << std::setw(2) << std::setfill('0') << days;
                i++;
            }
            else if (pattern[i] == 'H' && i+1 < pattern.size() && pattern[i+1] == 'H') {
                oss << std::setw(2) << std::setfill('0') << hours;
                i++;
            }
            else if (pattern[i] == 'M' && i+1 < pattern.size() && pattern[i+1] == 'M') {
                oss << std::setw(2) << std::setfill('0') << minutes;
                i++;
            }
            else if (pattern[i] == 'S' && i+1 < pattern.size() && pattern[i+1] == 'S') {
                oss << std::setw(2) << std::setfill('0') << seconds;
                i++;
            }
            else {
                oss << pattern[i];  // Output literal character
            }
        }

        return oss.str();
    }
};

#endif
