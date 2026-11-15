#include <stdio.h>

// Helper function to find GCD
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM
int findLCM(int a, int b) {
    // Divided first to prevent potential integer overflow from (a * b)
    return (a / findGCD(a, b)) * b;
}
