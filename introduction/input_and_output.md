## Objective

In this challenge, we practice reading input from `stdin` and printing output to `stdout`.

In C++, you can read a single whitespace-separated token of input using `cin`, and print output to `stdout` using `cout`. For example, let's say we declare the following variables:

```cpp
string s;
int n;
```

And we want to use cin to read the input "High 5" from stdin. We can do this with the following code:

``` cin >> s >> n; ```

This reads the first word ("High") from stdin and saves it as a string, then reads the second word ("5") and saves it as an integer. If we want to print these values to stdout, separated by a space, we write:

```cout << s << " " << n << endl;```

This prints the contents of the string, a single space, then the integer. We end our line of output with a newline using endl. The result:
 
```High 5```

## Task

Read three numbers from stdin and print their sum to stdout.

## Input Format

One line that contains three space-separated integers: a, b, and c.

## Constraints

- All three integers are within the range of standard 32-bit signed integers.

## Output Format

Print the sum of the three numbers on a single line.


## Sample Input

``` 1 2 7 ```

##  Sample Output

``` 10 ```

## Explanation

The sum of the three numbers is:
1 + 2 + 7 = 10


<hr>

## Solution (C++)

```
#include <iostream>
using namespace std;

int main() {
    int a, b, c, sum;
    cin >> a >> b >> c;
    sum = a + b + c;
    cout << sum;
    return 0;
}
```
Happy coding! 