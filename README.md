# Food Stall Billing System

Welcome to my messy but functional code! (near 500 lines hahah). I made this before as a beginner. 
(Yes, it looks chaotic, but don’t worry, it does the job. At the end, your ice cream still gets served.)  

This is a simple program that records and prints a receipt. It’s one-time use only since I didn't use file handling.

---

## What the Program is About

### 1. Choose Your Food, Shows the Amount, & Gives Options  
The program displays a menu of food items (Burger, Fries, Soda, Pizza, Ice cream). The user selects an item and inputs how many they want. After selection, the program calculates the price and asks if you want to:  
- **Add to Cart (0)** → go back to menu  
- **Proceed to Orders (1)** → move forward with checkout  
![Choose Food](sst1.png)

---

### 2. Add to Cart → Back to Menu  
If you choose to add to cart, it saves the current item and returns you to the food menu to pick more.  
![Add to Cart](sst2.png)
![Add to Cart](sst3.png)

---

### 3. Proceed to Orders  
When you proceed, the program finalizes your orders and shows the current cart total. If your total qualifies, it even unlocks discount vouchers  
![Proceed Orders](sst4.png)

---

### 4. Voucher Selection  
Depending on your cart amount, vouchers appear (e.g., `GASTOSMOTOL`, `PANTROPA`, `YAMAN`). The program applies the discount and adds VAT.  
![Voucher](sst5.png)

---

### 5. Final Price  
After discounts and tax, the program presents your final payable amount.  
![Final Price](sst6.png)

---

### 6. Receipt Generation  
Finally, you can choose to print a detailed receipt with shop info, item breakdown, discounts, VAT, and total.  
![Receipt](sst7.png)

---

## How to Run
1. Copy the code into a file named `tusoktusok.c`  
2. Compile with:
   
   ```bash
   gcc receipt.c -o tusoktusok
---

<img src="https://upload.wikimedia.org/wikipedia/commons/1/19/C_Logo.png" alt="C Logo" width="80"/>

