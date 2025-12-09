# 🧠 HackerRank C++ Solutions

A collection of **C++ solutions** for various **HackerRank** problems — written for clarity, efficiency, and learning.  
Each solution demonstrates good coding style, optimal algorithms, and standard C++17 features.

---

## 🚀 Overview

This repository aims to:

- Provide **clean and well-documented** solutions for HackerRank challenges.  
- Help learners understand **different problem-solving patterns** (arrays, strings, DP, graphs, etc.).  
- Serve as a **reference** for interview preparation or algorithmic practice.

---

## 💡 Features

- All solutions written in **C++17** (compatible with most online judges).  
- Includes **problem link**, **approach summary**, and **complexity analysis** in each file.  
- Uses consistent formatting and structure across all solutions.  
- Ideal for revision or competitive programming practice.

---

## 🧩 Solution Format

Each `.cpp` file follows this standard format:

```cpp
#include <bits/stdc++.h>
using namespace std;

/*
Problem: [Problem Name]
Link: [HackerRank Problem URL]
Approach: [Brief explanation of algorithm/logic]
Complexity: Time O(...), Space O(...)

Notes:
- [Any additional information or assumptions]
*/

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Your solution here

    return 0; 
}
```

✅ **Tip:** Always include problem name, link, and complexity — this makes your repo self-documented and easy to navigate.

---

## ⚙️ Compilation & Execution

Compile and run using:

```bash
g++ -std=c++17 -O2 -pipe -Wall filename.cpp -o solution
./solution < input.txt
```

Or test interactively by pasting the sample input after running:

```bash
./solution
```

---

## 🧪 Testing Solutions

You can validate your solutions by:

1. Using **sample test cases** provided on HackerRank.  
2. Creating local input files and redirecting them to your program:

   ```bash
   ./solution < input1.txt > output1.txt
   ```

3. Comparing your output with expected results using:

   ```bash
   diff -u expected1.txt output1.txt
   ```

---

## 🧱 Recommended C++ Practices

- Prefer **readability over micro-optimizations**.  
- Use `long long` for large integers to avoid overflow.  
- Keep functions **modular and well-named**.  
- Avoid unnecessary global variables and macros.  
- Add **brief comments** explaining tricky logic.  

---

## 🏷️ Optional Tags in Each File

Add lightweight tags for better organization:

```cpp
// tags: sorting, greedy, arrays
// difficulty: medium
```

This helps when searching through many problems later.

---

## 🤝 Contributing

Contributions are always welcome!  

If you’d like to add or improve a solution:

1. Fork this repo  
2. Create a new branch (`feature/problem-name`)  
3. Add your `.cpp` solution following the structure above  
4. Commit and open a pull request  

Please include in your PR:
- Problem name and HackerRank link  
- Short explanation of your approach  
- Time & space complexity  

---

## 🧾 License

This project is licensed under the **MIT License** — you are free to use, modify, and share the code with attribution.

---

## 💬 Contact

If you’d like to discuss solutions, suggest improvements, or report issues, feel free to open a GitHub issue or start a discussion.

---

**Happy Coding & Keep Practicing! 💻⚡**

> “The best way to learn algorithms is to write them — again and again.”
