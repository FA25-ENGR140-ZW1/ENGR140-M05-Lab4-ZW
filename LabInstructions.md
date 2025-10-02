# C++ Functions Lab: Calculator & Knock-Knock Jokes

## Lab Objectives
By the end of this lab, you will be able to:
- Create and call functions in C++
- Understand function parameters and return values
- Implement function overloading
- Practice modular programming techniques

## Background

**Functions** are reusable blocks of code that perform specific tasks. They help organize code and make it more maintainable.

**Function Overloading** allows multiple functions to have the same name but different parameter lists (different number or types of parameters).

---

## Part 1: Simple Calculator Program

### Overview
Create a calculator program that performs basic arithmetic operations using functions.

### Requirements

Create a new file called `calculator.cpp` and implement the following functions:

#### Required Functions:

1. **`displayMenu()`**
   - Return type: `void`
   - Parameters: none
   - Purpose: Display the calculator menu options to the user

2. **`add(double a, double b)`**
   - Return type: `double`
   - Parameters: two doubles
   - Purpose: Return the sum of two numbers

3. **`subtract(double a, double b)`**
   - Return type: `double`
   - Parameters: two doubles
   - Purpose: Return the difference of two numbers

4. **`multiply(double a, double b)`**
   - Return type: `double`
   - Parameters: two doubles
   - Purpose: Return the product of two numbers

5. **`divide(double a, double b)`**
   - Return type: `double`
   - Parameters: two doubles
   - Purpose: Return the quotient of two numbers (check for division by zero!)

6. **`add(int a, int b)`** *Function Overload*
   - Return type: `int`
   - Parameters: two integers
   - Purpose: Return the sum of two integers
   - Note: This demonstrates function overloading with the `add()` function

### Program Flow

Your `main()` function should:
1. Display the menu
2. Get the user's operation choice
3. Get two numbers from the user
4. Call the appropriate function
5. Display the result
6. Allow the user to perform multiple calculations (use a loop)

### Sample Output

```
=== Simple Calculator ===
1. Add
2. Subtract
3. Multiply
4. Divide
5. Exit

Enter your choice (1-5): 1
Enter first number: 10.5
Enter second number: 5.3
Result: 10.5 + 5.3 = 15.8

Continue? (y/n): y

=== Simple Calculator ===
1. Add
2. Subtract
3. Multiply
4. Divide
5. Exit

Enter your choice (1-5): 4
Enter first number: 20
Enter second number: 0
Error: Cannot divide by zero!

Continue? (y/n): n
Thank you for using the calculator!
```

### Tips
- Remember to include necessary headers (`<iostream>`)
- Use appropriate variable names
- Add input validation where needed
- Test your overloaded `add()` function with both integers and doubles

---

## Part 2: Knock-Knock Joke Program

### Overview
Create a fun program that tells knock-knock jokes using functions.

### Requirements

Create a new file called `knockknock.cpp` and implement the following functions:

#### Required Functions:

1. **`tellJoke(string who, string punchline)`**
   - Return type: `void`
   - Parameters: two strings (the "who" part and the punchline)
   - Purpose: Tell a complete knock-knock joke with user interaction

2. **`displayJokeMenu()`**
   - Return type: `void`
   - Parameters: none
   - Purpose: Display available jokes to choose from

3. **`waitForUser()`**
   - Return type: `void`
   - Parameters: none
   - Purpose: Wait for the user to press Enter to continue (enhances joke timing)

### Program Flow

Your `main()` function should:
1. Display the joke menu
2. Let the user select a joke
3. Call `tellJoke()` with appropriate parameters
4. Use `waitForUser()` for comedic timing
5. Allow the user to hear multiple jokes

### Sample Joke Ideas

You must include at least **3 different knock-knock jokes**. Here are some examples:

- "Interrupting cow" / "Mooooo!"
- "Boo" / "Don't cry, it's just a joke!"
- "Tank" / "You're welcome!"

### Sample Output

```
=== Knock-Knock Joke Teller ===
Choose a joke:
1. Interrupting Cow
2. Boo
3. Tank
4. Exit

Enter your choice (1-4): 1

Knock knock!
(Press Enter to continue...)

Who's there?
(Press Enter to continue...)

Interrupting cow
(Press Enter to continue...)

Interrupting cow wh--
MOOOOO!

Want to hear another joke? (y/n): y

=== Knock-Knock Joke Teller ===
Choose a joke:
1. Interrupting Cow
2. Boo
3. Tank
4. Exit

Enter your choice (1-4): 4

Thanks for laughing with us! 😄
```

### Tips
- Make the jokes interactive and fun!
- Consider adding color or formatting to make output more engaging
- Be creative with your joke selection!

---

## Submission Requirements

Submit both files:
1. `calculator.cpp`
2. `knockknock.cpp`

Make sure both programs:
- Compile without errors
- Run correctly
- Include appropriate comments
- Follow good coding practices
