# Say "Hello, World!" in C++

## Objective

This is a simple challenge to help you practice printing to standard output.  
You may also want to complete **Solve Me First** in C++ before attempting this challenge.

We're starting out by printing the most famous computing phrase of all time!  
In the editor below, use either `printf` or `cout` to print the string to stdout.

## Printing in C++

The more popular command form is `cout`. It has the following basic form:

```cpp
cout << value_to_print << value_to_print;
```

Any number of values can be printed using one command as shown.
The printf command comes from the C language. It accepts an optional format specification and a list of variables. Two examples for printing a string are

``` printf("%s", string);
    printf(string);
```

## Note: Neither method adds a newline. It only prints what you tell it to.

## Output Format

Print the following string to standard output:

``` Hello, World! ```

##  Sample Output

``` Hello, World! ```

### Solution (C++)

```
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!";
    return 0;
}
```
### Happy coding! 