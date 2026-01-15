#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Given a char[8] representing a binary number, returns the signed 8-bit
// integer it represents For example:
//   "10000000" produces -128 (most negative 8-bit number)
//   "00000001" produces 1
//   "00000000" produces 0
//   "11111111" produces -1
//   "01111111" produces 127 (most positive 8-bit number)
int8_t bin8_to_dec(char binary[]) {
  // TODO: Implement this function

  int sum = 0;
  int k = 0;
  if (binary[0] != '1') {
    for (int i = 7; i >= 0; i--) {
      sum += pow(2, k) * ((binary[i]) - '0');
      k++;
    }
    return sum;
  } else {

    char str[9];
    for (int j = 7; j >= 0; j--) {
      if (binary[j] == '0') {
        str[j] = '1';
      } else {
        str[j] = '0';
      }
    }
    str[8] = '\0';

    // convert flipped bits to number
    sum = 0;
    k = 0;
    for (int i = 7; i >= 0; i--) {
      sum += pow(2, k) * (str[i] - '0');
      k++;
    }

    // two's complement: negate and subtract 1
    return -1 * (sum + 1);
  }
}

int main() {
    char line[10]; // Extra space for newline and null terminator

    // Read lines until EOF
    while (fgets(line, sizeof(line), stdin) != NULL) {
      // Remove newline if present
      size_t len = strlen(line);
      if (len > 0 && line[len - 1] == '\n') {
        line[len - 1] = '\0';
      }

      // Convert binary string to decimal and print
      printf("%d\n", bin8_to_dec(line));
    }
  
  return 0;
}