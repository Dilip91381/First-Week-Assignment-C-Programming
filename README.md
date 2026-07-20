# 📦 Package Delivery Cost Estimator (C)

A simple C program that calculates the total delivery cost of a package based on its weight and the cost per kilogram entered by the user.

## 🚀 Features

- Accepts package weight (in kg) as input.
- Accepts delivery rate (cost per kg).
- Calculates the total delivery charge.
- Displays the final delivery cost.

## 🛠️ Technologies Used

- C Programming
- Standard Input/Output Library (`stdio.h`)

## 📂 File Structure

```
Package-Delivery-Cost-Estimator/
│── package_delivery.c
│── README.md
```

## 💻 How It Works

The program follows these steps:

1. Takes the package weight from the user.
2. Takes the delivery rate per kilogram.
3. Multiplies the weight by the rate.
4. Displays the total delivery charge.

### Formula Used

```
Total Charge = Weight × Rate
```

## 📷 Sample Output

```
Enter package weight (in kg): 12
Enter cost per kg (rate): 50
Total Charge=600
```

## ▶️ How to Run

### Compile

```bash
gcc package_delivery.c -o package_delivery
```

### Execute

#### Windows

```bash
package_delivery.exe
```

#### Linux / macOS

```bash
./package_delivery
```

## 📖 Example

| Package Weight (kg) | Rate (₹/kg) | Total Charge (₹) |
|--------------------:|------------:|-----------------:|
| 5                   | 40          | 200              |
| 10                  | 60          | 600              |
| 7.5                 | 80          | 600              |

## 🎯 Learning Concepts

- Variables
- User Input (`scanf`)
- Output (`printf`)
- Arithmetic Operations
- Basic C Programming

## 👨‍💻 Author

**Dilip**

GitHub: https://github.com/Dilip91381 

⭐ If you found this project helpful, consider giving it a star on GitHub!