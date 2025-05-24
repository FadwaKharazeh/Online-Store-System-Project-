#include <iostream>
#include <string>
using namespace std;

class Product {
protected:
    int productId;
    string productName;
    string description;
    float price;

public:
    void setPrice(float p) { 
        price = p; 
        cout << "[setPrice(float)] Setting price as float." << endl;
    }

    void setPrice(int p, bool convert) { 
        if (convert)
            price = p * 0.7;
        else
            price = static_cast<float>(p);
        cout << "[setPrice(int, bool)] Setting price with conversion = " << convert << endl;
    }

    void setProductId(int i) { productId = i; }
    void setProductName(string n) { productName = n; }
    void setDescription(string d) { description = d; }

    int getProductId() { return productId; }
    string getProductName() { return productName; }
    string getDescription() { return description; }
    float getPrice() { return price; }

    virtual void display() {
        cout << "\n--- Product Information ---" << endl;
        cout << "Product ID: " << productId << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Description: " << description << endl;
        cout << "Price: " << price << " JD" << endl;
    }
};


class Customer : public Product {
protected:
    int customerId;
    string customerName;
    string email;
    string address;

public:
    void setCustomerId(int i) { customerId = i; }
    void setCustomerName(string n) { customerName = n; }
    void setEmail(string e) { email = e; }
    void setAddress(string a) { address = a; }

    int getCustomerId() { return customerId; }
    string getCustomerName() { return customerName; }
    string getEmail() { return email; }
    string getAddress() { return address; }

    void display() override {
        Product::display();
        cout << "\n--- Customer Information ---" << endl;
        cout << "Customer ID: " << customerId << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Email: " << email << endl;
        cout << "Address: " << address << endl;
    }
};

class Order : public Customer {
private:
    int orderId;
    string orderDate;

public:
    void setOrderId(int id) { orderId = id; }
    void setOrderDate(string date) { orderDate = date; }

    int getOrderId() { return orderId; }
    string getOrderDate() { return orderDate; }

    void display() override {
        Customer::display();
        cout << "\n--- Order Information ---" << endl;
        cout << "Order ID: " << orderId << endl;
        cout << "Order Date: " << orderDate << endl;
    }
};

class Invoice {
public:
    float calculateTotal(float price) {
        return price;
    }

    float calculateTotal(float price, float discountPercent) {
        float discountAmount = price * (discountPercent / 100);
        return price - discountAmount;
    }
};

int main() {
    Order o1;
    Invoice invoice;
    int priceInt, choice;
    float priceFloat;
    bool convert;
    cout << "Enter product price (float): ";
    cin >> priceFloat;
    o1.setPrice(priceFloat);
    cout << "Enter product price (int): ";
    cin >> priceInt;
    cout << "Convert price with 30% reduction? (1 = Yes, 0 = No): ";
    cin >> choice;
    convert = (choice == 1);
    o1.setPrice(priceInt, convert);
    cin.ignore();
    int prodId;
    string prodName, desc;
    cout << "Enter Product ID: ";
    cin >> prodId;
    cin.ignore();
    cout << "Enter Product Name: ";
    getline(cin, prodName);
    cout << "Enter Product Description: ";
    getline(cin, desc);
    o1.setProductId(prodId);
    o1.setProductName(prodName);
    o1.setDescription(desc);
    int custId;
    string custName, email, address;
    cout << "Enter Customer ID: ";
    cin >> custId;
    cin.ignore();
    cout << "Enter Customer Name: ";
    getline(cin, custName);
    cout << "Enter Customer Email: ";
    getline(cin, email);
    cout << "Enter Customer Address: ";
    getline(cin, address);
    o1.setCustomerId(custId);
    o1.setCustomerName(custName);
    o1.setEmail(email);
    o1.setAddress(address);
    int orderId;
    string orderDate;
    cout << "Enter Order ID: ";
    cin >> orderId;
    cin.ignore();
    cout << "Enter Order Date (YYYY-MM-DD): ";
    getline(cin, orderDate);
    o1.setOrderId(orderId);
    o1.setOrderDate(orderDate);
    Product* ptr = &o1;
    ptr->display();
    float total1 = invoice.calculateTotal(o1.getPrice());
    float total2 = invoice.calculateTotal(o1.getPrice(), 10); // Œ’„ 10%
    cout << "\n--- Invoice ---" << endl;
    cout << "Total without discount: " << total1 << " JD" << endl;
    cout << "Total with 10% discount: " << total2 << " JD" << endl;
    return 0;
}

