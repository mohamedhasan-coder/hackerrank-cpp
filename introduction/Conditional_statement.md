## Objective

In this challenge, we practice using conditional statements in C++ such as:

if

if - else

if - else if - else

These statements allow us to execute different blocks of code based on given conditions.


## Objective

In this challenge, we practice using conditional statements in C++ such as:

if

if - else

if - else if - else

These statements allow us to execute different blocks of code based on given conditions.    


## Conditional Statement Overview
### if Statement

Executes the block of code only if the condition is true

```
if (condition) {
    statement;
}
```

### if - else Statement

Executes one block when the condition is true, otherwise executes the else block.

```
if (condition) {
    statement1;
}
else {
    statement2;
}
```

### if - else if - else Statement

This checks multiple conditions in sequence until a true condition is found.

```
if (firstCondition) {
    ...
}
else if (secondCondition) {
    ...
}
else if (thirdCondition) {
    ...
}
else {
    ...
}
```
Only one block is executed in the entire chain.

## Task

Given a positive integer n, do the following:

If 1 ≤ n ≤ 9, print the lowercase English word for the number
(e.g., one, two, three, etc.).

If n > 9, print:

Greater than 9

### Input Format

A single integer n.

### Output Format

If n is between 1 and 9, print its English word in lowercase.

Otherwise, print:

Greater than 9

### Sample Input 0
5

### Sample Output 0
five

### Explanation 0

5 is between 1 and 9, so we print the English word five.

### Sample Input 1
8

### Sample Output 1
eight

### Explanation 1

8 is between 1 and 9, so we print eight.

### Sample Input 2
44

### Sample Output 2
Greater than 9

### Explanation 2

44 is greater than 9, so we print Greater than 9.

## Solution (C++11)

```
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1)
        cout << "one";
    else if (n == 2)
        cout << "two";
    else if (n == 3)
        cout << "three";
    else if (n == 4)
        cout << "four";
    else if (n == 5)
        cout << "five";
    else if (n == 6)
        cout << "six";
    else if (n == 7)
        cout << "seven";
    else if (n == 8)
        cout << "eight";
    else if (n == 9)
        cout << "nine";
    else
        cout << "Greater than 9";

    return 0;
}

```

Happy Coding!