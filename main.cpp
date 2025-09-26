#include <iostream>
#include "demo.h"

// Global variable - visible to ALL functions in this file
int globalCounter = 0;

// Function to show global vs local scope
void showScopes() {
    int localValue = 50;      // Local variable
    static int staticValue = 100;  // Static - persists between calls
    
    globalCounter++;           // Modify global
    localValue++;             // Modify local
    staticValue++;            // Modify static
    
    std::cout << "  Global: " << globalCounter;
    std::cout << ", Local: " << localValue;
    std::cout << ", Static: " << staticValue << std::endl;
}

int main() {
    std::cout << "\n========================================" << std::endl;
    std::cout << "    C++ FUNCTIONS CORE CONCEPTS DEMO" << std::endl;
    std::cout << "========================================\n" << std::endl;
    
    // ============================================
    // 1. DEFINING AND CALLING FUNCTIONS
    // ============================================
    std::cout << "1. DEFINING AND CALLING FUNCTIONS:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    
    // Calling functions and storing return values
    int sum = add(10, 20);
    std::cout << "  add(10, 20) returned: " << sum << std::endl;
    
    double quotient = divide(15.0, 3.0);
    std::cout << "  divide(15.0, 3.0) returned: " << quotient << std::endl;
    
    // Calling void functions
    printMessage("Hello from main!");
    displayResult(sum);
    std::cout << std::endl;
    
    // ============================================
    // 2. FUNCTION PARAMETERS AND RETURN VALUES
    // ============================================
    std::cout << "2. PARAMETERS AND RETURN VALUES:" << std::endl;
    std::cout << "---------------------------------" << std::endl;
    
    // Functions can be used in expressions
    int result = add(5, 3) * 2;  // Return value used directly
    std::cout << "  add(5, 3) * 2 = " << result << std::endl;
    
    // Parameters are evaluated before passing
    int x = 10, y = 20;
    std::cout << "  Variables x=" << x << ", y=" << y << std::endl;
    std::cout << "  add(x+1, y-1) = " << add(x+1, y-1) << std::endl;
    std::cout << std::endl;
    
    // ============================================
    // 3. FUNCTION OVERLOADING
    // ============================================
    std::cout << "3. FUNCTION OVERLOADING:" << std::endl;
    std::cout << "------------------------" << std::endl;
    
    // Compiler selects version based on arguments
    std::cout << "  calculate(5, 10) = " << calculate(5, 10) << std::endl;
    std::cout << "  calculate(5.5, 2.0) = " << calculate(5.5, 2.0) << std::endl;
    std::cout << "  calculate(1, 2, 3) = " << calculate(1, 2, 3) << std::endl;
    std::cout << std::endl;
    
    // ============================================
    // 4. PASS BY VALUE
    // ============================================
    std::cout << "4. PASS BY VALUE:" << std::endl;
    std::cout << "-----------------" << std::endl;
    
    int original = 42;
    std::cout << "  Original value before: " << original << std::endl;
    modifyByValue(original);
    std::cout << "  Original value after: " << original << " (unchanged!)" << std::endl;
    std::cout << std::endl;
    
    // ============================================
    // 5. PASS BY REFERENCE
    // ============================================
    std::cout << "5. PASS BY REFERENCE:" << std::endl;
    std::cout << "---------------------" << std::endl;
    
    original = 42;
    std::cout << "  Original value before: " << original << std::endl;
    modifyByReference(original);
    std::cout << "  Original value after: " << original << " (changed!)" << std::endl;
    std::cout << std::endl;
    
    // ============================================
    // 6. SCOPE AND LIFETIME OF VARIABLES
    // ============================================
    std::cout << "6. SCOPE AND LIFETIME OF VARIABLES:" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    
    demonstrateLocalScope();
    std::cout << std::endl;
    
    std::cout << "  Calling showScopes() three times:" << std::endl;
    showScopes();  // Static variable persists
    showScopes();  // Global increments each time
    showScopes();  // Local resets each time
    
    std::cout << "\n  Final global counter: " << globalCounter << std::endl;
    
    // Demonstrate block scope in main
    std::cout << "\n  Block scope in main:" << std::endl;
    int mainVar = 999;
    {
        int mainVar = 111;  // Shadows the outer mainVar
        std::cout << "    Inside block: mainVar = " << mainVar << std::endl;
    }
    std::cout << "    Outside block: mainVar = " << mainVar << std::endl;
    
    std::cout << "\n========================================" << std::endl;
    std::cout << "           END OF DEMO" << std::endl;
    std::cout << "========================================\n" << std::endl;
    
    return 0;
}