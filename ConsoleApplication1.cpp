#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class InventoryService {
public:
    void checkAvailability(const string& product) {
        if (product.empty()) {
            throw invalid_argument("Product name cannot be empty.");
        }

        cout << "Product availability checked: " << product << endl;
    }
};

class PaymentService {
public:
    void makePayment(double amount) {
        if (amount <= 0) {
            throw invalid_argument("Payment amount must be greater than zero.");
        }

        cout << "Payment completed. Amount: " << amount << " UAH" << endl;
    }
};

class DeliveryService {
public:
    void createDelivery(const string& product) {
        cout << "Delivery created for product: " << product << endl;
    }
};

class NotificationService {
public:
    void sendNotification() {
        cout << "Notification sent to client." << endl;
    }
};

class OrderFacade {
private:
    InventoryService inventoryService;
    PaymentService paymentService;
    DeliveryService deliveryService;
    NotificationService notificationService;

public:
    void processOrder(const string& product, double amount) {
        cout << "Order processing started..." << endl;

        inventoryService.checkAvailability(product);
        paymentService.makePayment(amount);
        deliveryService.createDelivery(product);
        notificationService.sendNotification();

        cout << "Order processing finished." << endl;
    }
};

int main() {
    string product;
    double amount;

    cout << "Enter product name: ";
    cin >> product;

    cout << "Enter payment amount: ";
    cin >> amount;

    try {
        OrderFacade orderFacade;
        orderFacade.processOrder(product, amount);
    }
    catch (const exception& error) {
        cout << "Error: " << error.what() << endl;
    }

    return 0;
}