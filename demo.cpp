#include "demo.h"
#include <iostream>

// ============================================
// 1. BASIC FUNCTIONS WITH RETURN VALUES
// ============================================

int add(int a, int b) {
    // Parameters a and b are local to this function
    // They exist only while the function is executing
    int result = a + b;  // 'result' is a local variable
    return result;       // Returns a COPY of the value
}  // a, b, and result are destroyed here

double divide(double num1, double num2) {
    if (num2 == 0) {
        std::cout << "Error: Division by zero!" << std::endl;
        return 0;
    }
    return num1 / num2;  // Can return expression directly
}

// ============================================
// 2. VOID FUNCTIONS (NO RETURN VALUE)
// ============================================

void printMessage(std::string message) {
    // 'message' is a local parameter
    std::cout << "Message: " << message << std::endl;
    // No return statement needed for void functions
}  // 'message' is destroyed here

void displayResult(int value) {
    std::cout << "The result is: " << value << std::endl;
    // return;  // Optional - can use empty return to exit early
}

// ============================================
// 3. FUNCTION OVERLOADING
// ============================================

// Version 1: Two integers
int calculate(int a, int b) {
    std::cout << "  Using INT version (2 params): ";
    return a + b;
}

// Version 2: Two doubles  
double calculate(double a, double b) {
    std::cout << "  Using DOUBLE version (2 params): ";
    return a * b;
}

// Version 3: Three integers
int calculate(int a, int b, int c) {
    std::cout << "  Using INT version (3 params): ";
    return a + b + c;
}

// ============================================
// 4. PASS BY VALUE
// ============================================

void modifyByValue(int num) {
    std::cout << "  Inside function - received value: " << num << std::endl;
    num = num * 2;  // Only modifies the LOCAL COPY
    std::cout << "  Inside function - modified to: " << num << std::endl;
}  // The local copy 'num' is destroyed here

// ============================================
// 5. PASS BY REFERENCE
// ============================================

void modifyByReference(int& num) {
    std::cout << "  Inside function - received value: " << num << std::endl;
    num = num * 2;  // Modifies the ORIGINAL variable
    std::cout << "  Inside function - modified to: " << num << std::endl;
}  // No local copy - we worked with the original

// ============================================
// 6. SCOPE DEMONSTRATION
// ============================================

void demonstrateLocalScope() {
    int localVar = 100;  // Local to this function
    std::cout << "  Function scope - localVar: " << localVar << std::endl;
    
    // Create a new scope block
    {
        int blockVar = 200;  // Only exists in this block
        int localVar = 300;  // This shadows the function's localVar
        std::cout << "  Block scope - blockVar: " << blockVar << std::endl;
        std::cout << "  Block scope - localVar (shadows): " << localVar << std::endl;
    }  // blockVar is destroyed here, inner localVar is destroyed
    
    std::cout << "  Function scope - localVar still: " << localVar << std::endl;
}  // localVar is destroyed here