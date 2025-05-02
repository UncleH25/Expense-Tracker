# 🧾 Expense Tracker
A C++ program that reads expense data from a file (`expenses.txt`), calculates VAT and total amounts for each entry, and generates a neatly formatted receipt saved to an output file (`receipt.txt`).

## 📄 Description
This program demonstrates file input/output in C++. It reads expense categories and amounts from a file, calculates a 15% VAT for each item, adds it to the amount, and writes a detailed receipt to a separate file. It also calculates the overall total including VAT.

The receipt is formatted into columns using I/O manipulators to ensure clean and readable output.

## 📂 Example `expenses.txt` Input
```
Groceries 230.50
Transport 100.00
Internet 299.99
```

## 📂 Example `receipt.txt` Input
```
Category:         Amount:       VAT:     Total: 
---------------------------------------------
Groceries           230.50      34.58     265.08
Transport           100.00      15.00     115.00
Internet            299.99      45.00     344.99
---------------------------------------------
Total Expense:                 725.07
```


## 🛠️ Technologies Used
* Language: C++
* IDE Used: Visual Studio (But any IDE will work)

## 📦 How to Run
1. Prepare the Input File

Create a file named `expenses.txt` and add your expense entries, each in the format:
```
CategoryName amount
```

3. Clone The Repo Using CMD:
```
git clone https://github.com/UncleH25/Expense-Tracker.git
cd expense-tracker
```

3. From a terminal (in the extracted folder), run:
```
g++ -o expense_tracker main.cpp
./expense_tracker
```

4. Or, if you're using an IDE like Code::Blocks or Visual Studio, open the file and press **Run** or **Build and Run**.

5. It will generate a file called `receipt.txt` in the same folder with your results.

## 📌 License
This project is open source and free to use under the **MIT License**.
