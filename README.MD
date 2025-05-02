```markdown
# Edit Distance Algorithms – Internship Assignment (OneBanc)

## 📌 Overview

This project implements two string comparison algorithms:

1. _Standard Levenshtein Distance_
2. _Weighted Levenshtein Distance_

It also includes a _basic spell checker_ that suggests the closest word from a dictionary using Levenshtein distance.

## 📁 File Structure
```

.
├── main.cpp # Handles input/output and test cases
├── onebanc_standard_distance.cpp # Implements standard Levenshtein distance
├── onebanc_weighted_distance.cpp # Implements weighted distance & spell checker
└── README.md # Documentation

````

---

## 🧠 Algorithms Implemented

### 1. Standard Levenshtein Distance

- Function: `int levenshtein_distance(const string& str1, const string& str2)`
- Returns the minimum number of insertions, deletions, and substitutions to convert `str1` to `str2`.
- Time Complexity: O(n * m)

### 2. Weighted Levenshtein Distance

- Function:
  ```cpp
  int weighted_levenshtein_distance(const string& str1, const string& str2, int Ci, int Cd, int Cs)
````

- Parameters:
  - `Ci`: Cost of insertion
  - `Cd`: Cost of deletion
  - `Cs`: Cost of substitution
- Returns the _minimum total cost_ to convert `str1` to `str2`.

### 3. Spell Checker

- Function:
  ```cpp
  string spell_checker(const vector<string>& dictionary, const string& input)
  ```
- Suggests the word with the _smallest Levenshtein distance_ from the dictionary.

---

## 🧪 Test Cases

## ⚙️ How to Compile and Run

### Step 1: Compile all files

```bash
g++ -std=c++11 main.cpp onebanc_standard_distance.cpp onebanc_weighted_distance.cpp -o edit_distance
```

### Step 2: Run the executable

#### On Windows PowerShell:

```bash
.\edit_distance.exe
```

---

## 🛑 Notes

- ✅ No AI tools or third-party libraries were used.
- ✅ Solution adheres strictly to the constraints provided.
- ✅ All algorithms are implemented from scratch.

---

## ✍️ Author

_Kartikey Setia_
Third Year B.Tech CSE Student  
Contact: _[Kartikeysetia22@gmail.com]_

```

---
```
