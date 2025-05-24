# Online-Store-System-Project
This is an online store system for an OOP lab at the university, represent code using classes, inheritance (multilevel inheritance), Encapsulation and polymorphism (overloading and overriding) 
A detailed explanation of what happens when the program runs. This example shows how the user interacts with the program and enters data himself:
1.Enter price as float:
Enter product price as float:
>> 150.5
[setPrice(float)] Setting price as float
The program asks the user to enter the price as a float, for example: 150.5
The user enters the price
The product displays a message indicating that it used the setPrice(float) function.
2. Display price as int with convert option:
Enter product price as int:
>> 300
Convert price to float with 30% reduction? (1 = yes, 0 = no):
>> 1
[setPrice(int, bool)] Setting price with conversion = 1
Then it asks, "Would you like to calculate it with a 30% discount?"
1 = Yes
0 = No
The user selects 1 (meaning "yes").
The program calculates the new price: 300 * 0.7 = 210.0
And displays a message indicating that it has been copied.
3. Enter product information:
Enter product ID:
>> 101
Enter product name:
>> Smart Watch
Enter product description:
>> Waterproof fitness tracker
The user enters:
Product number (e.g., 101)
Product name (e.g., smart watch)
Product description (e.g., Waterproof fitness tracker)
4. Enter customer information:
Enter customer ID:
>> 23
Enter customer name:
>> Fadwa Kharazeh
Enter customer email:
>> fadwakharazeh@gmail.com
Enter customer address:
>> Amman - Jordan
Enter the information of the person who made the purchase:
Customer number, name, email, and address.
5. Enter order details:
Enter order ID:
>> 56789
Enter order date (YYYY-MM-DD):
>> 2025-05-24
Enter the order number and purchase date.
6. Data display:
Product ID: 101
Product Name: Smart Watch
Description: Waterproof fitness tracker
Price: 210 JD
Customer ID: 23
Customer Name: Sarah Ali
Email: sarah.ali@example.com
Address: Amman - Jordan
Order ID: 56789
Order Date: 2025-05-24
After the user enters all the data, the program displays it all in a formatted way, using the display() function, and prints all the information the user entered.
7. Final price display with and without discount:
Total without discount: 210 JD
Total with 10% discount: 189 JD
The program displays:
Final price before discount: 210 dinars
Price after 10% discount: 210 - 21 = 189 dinars.
