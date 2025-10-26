# Basic Data Types in C++

## Objective

Practice reading and printing basic C++ data types using `cin` and `cout`.  
You’ll read five space-separated values from standard input and print each on a new line with specific formatting.

---

## Data Types Overview

| Type   | Format Specifier | Bit Width | Description         |
|--------|------------------|-----------|---------------------|
| `int`  | `%d`              | 32-bit    | Integer             |
| `long` | `%ld`             | 64-bit    | Long integer        |
| `char` | `%c`              | 8-bit     | Character           |
| `float`| `%f`              | 32-bit    | Real number         |
| `double`| `%lf`            | 64-bit    | High-precision float|

You can use either `scanf`/`printf` or `cin`/`cout`. For large-scale input/output, `scanf` and `printf` are faster.

---

## Input Format

One line containing space-separated values in the following order:

int long char float double


---

## Output Format

Print each value on a **new line**, in the same order:
- `float` should be printed with **3 decimal places**
- `double` should be printed with **9 decimal places**

---

## Sample Input


3 12345678912345 a 334.23 14049.30493


## Sample Output

3 12345678912345 a 334.230 14049.304930000


---

## Explanation

- First line: prints the `int`
- Second line: prints the `long long`
- Third line: prints the `char`
- Fourth line: prints the `float` with 3 decimal places
- Fifth line: prints the `double` with 9 decimal places

---

## Solution (C++)

```cpp
#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int a;
    long long b;
    char c;
    float d;
    double e;

    cin >> a >> b >> c >> d >> e;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    cout << fixed << setprecision(3);
    cout << d << endl;

    cout << fixed << setprecision(9);
    cout << e;

    return 0;
}

```

Happy coding! 