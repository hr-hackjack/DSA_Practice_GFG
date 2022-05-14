//  * Code by : hr-hackjack
#include <iostream>
using namespace std;

/**
 * This method converts the bit representation and stores it as a decimal
 * number.
 */
void dec2bin(int number) {
    int remainder, binary = 0, var = 1;

    do {
        remainder = number % 2;
        number = number / 2;
        binary = binary + (remainder * var);
        var = var * 10;
    } while (number > 0);
    cout << "Method 1 : " << binary << endl;
}

/**
 * This method stores each bit value from LSB to MSB and then prints them back
 * from MSB to LSB
 */
void print(int number) {
    int num_bits = 0;
    char bit_string[50];

    do {
        bool bit = number & 0x01;  // get last bit
        if (bit)
            bit_string[num_bits++] = '1';
        else
            bit_string[num_bits++] = '0';
        number >>= 1;  // right shift bit 1 bit
    } while (number > 0);

    cout << "Method 2 : ";
    while (num_bits >= 0)
        cout << bit_string[num_bits--];  // print from MSB to LSB
    cout << endl;
}

int main() {
    // int number;
    // cout << "Enter a number:";
    // cin >> number;

    dec2bin(number);
    print(number);

    return 0;
}
