# Quiz Game in C++

This is a simple **console-based Quiz Game project** built in C++.  
It includes a **login system** and multiple-choice quizzes from different subjects.

---

## Features

- User Login System (Username & Password)
- Multiple Subjects:
  - Mathematics
  - English
  - Physics
  - Pakistan Studies
- Multiple-choice questions (MCQs)
- Input validation
- Instant result feedback
- Subject-wise scoring
- Final overall result with grade system (A, B, C, D, F)
- Pass/Fail result

---

##  How It Works

1. User enters username and password
2. If login is correct → quiz menu opens
3. User selects a subject:
   - M → Math
   - E → English
   - P → Physics
   - S → Pakistan Studies
4. Each subject contains 10 MCQs
5. After each subject:
   - Score is calculated
   - Percentage is shown
   - Grade is displayed
6. At the end:
   - Overall result is displayed

---

## Grading System

| Percentage | Grade |
|------------|------|
| 90 - 100   | A    |
| 80 - 89    | B    |
| 70 - 79    | C    |
| 60 - 69    | D    |
| Below 60   | F    |

---

## Technologies Used

- C++
- iostream
- cstring (for string comparison)

---

##  How to Run

1. Open terminal or VS Code
2. Compile the program:
```bash
g++ quizgame.cpp -o quizgame
