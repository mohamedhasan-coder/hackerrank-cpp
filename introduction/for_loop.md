## Objective

In this challenge, we practice using the for loop to repeatedly execute a block of code over a given range.

A for loop has the following syntax:
```
for (initialization; condition; update) {
    statement;
}
```

Where:

initialization → Initializes the loop variable

condition → Checks whether the loop should continue

update → Updates the loop variable after each iteration

## Example:
```
for (int i = 0; i < 10; i++) {
    // loop body
}
```
### Task

You are given two positive integers n and m. For each integer i in the inclusive range from n to m, do the following:

If 1 ≤ i ≤ 9, print the lowercase English word for the number
(e.g., one, two, three, etc.).

If i > 9 and i is even, print:

even


If i > 9 and i is odd, print:

odd

### Input Format

Two positive integers n and m, each on a new line.

### Output Format

For each value of i in the range n to m (inclusive), print the required output on a new line.

### Sample Input
8
11

### Sample Output
eight
nine
even
odd

### Explanation

The loop runs from 8 to 11:

8 → between 1 and 9 → print eight

9 → between 1 and 9 → print nine

10 → greater than 9 and even → print even

11 → greater than 9 and odd → print odd

### Solution (C++11)
```
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    cin >> m;

    for (int i = n; i <= m; i++) {

        if (i == 1) cout << "one" << endl;
        else if (i == 2) cout << "two" << endl;
        else if (i == 3) cout << "three" << endl;
        else if (i == 4) cout << "four" << endl;
        else if (i == 5) cout << "five" << endl;
        else if (i == 6) cout << "six" << endl;
        else if (i == 7) cout << "seven" << endl;
        else if (i == 8) cout << "eight" << endl;
        else if (i == 9) cout << "nine" << endl;

        else {
            if (i % 2 == 0)
                cout << "even" << endl;
            else
                cout << "odd" << endl;
        }
    }

    return 0;
}
```

### Key Concepts Used

for loop

if - else conditional statements

Modulus operator % for even/odd checking

Input using cin

Output using cout

Happy Coding!