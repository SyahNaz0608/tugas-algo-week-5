#include <iostream>
#include <bitset> // Used to easily print numbers in binary format

void printState(const std::string& label, int value) {
    // Prints the decimal value and its 8-bit binary representation
    std::cout << label << ": " << value << " (Binary: " << std::bitset<8>(value) << ")\n";
}

int main() {
    int x;

    std::cout << "--- Bitwise Assignment Operators in C++ ---\n\n";

    // 1. Bitwise AND Assignment (&=)
    x = 5; // Reset to 5 (00000101)
    x &= 3; // Equivalent to: x = x & 3 (00000011)
    printState("After x &= 3", x); // Expected: 1 (00000001)

    // 2. Bitwise OR Assignment (|=)
    x = 5; 
    x |= 3; // Equivalent to: x = x | 3 (00000011)
    printState("After x |= 3", x); // Expected: 7 (00000111)

    // 3. Bitwise XOR Assignment (^=)
    x = 5; 
    x ^= 3; // Equivalent to: x = x ^ 3 (00000011)
    printState("After x ^= 3", x); // Expected: 6 (00000110)

    // 4. Right Shift Assignment (>>=)
    x = 5; 
    x >>= 3; // Equivalent to: x = x >> 3
    printState("After x >>= 3", x); // Expected: 0 (00000000)

    // 5. Left Shift Assignment (<<=)
    x = 5; 
    x <<= 3; // Equivalent to: x = x << 3
    printState("After x <<= 3", x); // Expected: 40 (00101000)

    return 0;
}
