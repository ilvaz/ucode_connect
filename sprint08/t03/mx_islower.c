#include <stdbool.h>

bool mx_islower(int c);

bool mx_islower(int c) {
    if (c > 96 && c < 123) {
        return true;
    } else {
        return false;
    } 
}

