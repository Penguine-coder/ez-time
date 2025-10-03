# Time Converter - ez-time
A lightweight C++ library to store, manipulate, and format time into any custom format.

## Features
- **Flexible & Extendable Time Storage**
  
  Store time in a structured way with **Years, Months, Days, Hours, Minutes, Seconds**.

- **Custom Formatting**
  
  Convert your time objects into **any string format** using placeholders:

  - YYYY → Years (4 digits)
  - MO → Months (2 digits)
  - DD → Days (2 digits)
  - HH → Hours (2 digits)
  - MM → Minutes (2 digits)
  - SS → Seconds (2 digits)

- **Reusable Utility**
  
  Header-only library, easy to include in any C++ project.

## Usage

```cpp
#include <iostream>
#include "time_utils.h"

int main() {
    Time t(2025, 10, 3, 14, 5, 9); // YYYY, MO, DD, HH, MM, SS

    std::cout << t.format("YYYY-MO-DD HH:MM:SS") << "\n";   // OUTPUT: 2025-10-03 14:05:09
    std::cout << t.format("DD/HH:MM") << "\n";              // OUTPUT: 03/14:05
    std::cout << t.format("HH hours, MM minutes") << "\n";  // OUTPUT: 14 hours, 05 minutes

    return 0;
}

```
## Supported Placeholders

| Placeholder | Description        | Example |
| ----------- | ------------------ | ------- |
| `YYYY`      | Years (4 digits)   | 2025    |
| `MO`        | Months (2 digits)  | 10      |
| `DD`        | Days (2 digits)    | 03      |
| `HH`        | Hours (2 digits)   | 14      |
| `MM`        | Minutes (2 digits) | 05      |
| `SS`        | Seconds (2 digits) | 09      |


## Installation
1. Copy time_utils.h into your project directory.
2. Include it in your .cpp files:
```cpp
#include "time_utils.h"
```
