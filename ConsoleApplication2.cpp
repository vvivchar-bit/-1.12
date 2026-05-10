#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class ModernPrinter {
public:
    virtual void print(const string& documentName) = 0;
    virtual ~ModernPrinter() = default;
};

class OldPrinter {
public:
    void oldPrint(const string& text) {
        cout << "Old printer prints document: " << text << endl;
    }
};

class PrinterAdapter : public ModernPrinter {
private:
    OldPrinter* oldPrinter;

public:
    PrinterAdapter(OldPrinter* printer) {
        if (printer == nullptr) {
            throw invalid_argument("Printer object cannot be null.");
        }

        oldPrinter = printer;
    }

    void print(const string& documentName) override {
        if (documentName.empty()) {
            throw invalid_argument("Document name cannot be empty.");
        }

        oldPrinter->oldPrint(documentName);
    }
};

int main() {
    string documentName;

    cout << "Enter document name: ";
    cin >> documentName;

    try {
        OldPrinter oldPrinter;
        PrinterAdapter adapter(&oldPrinter);

        cout << "Client uses modern printer interface." << endl;
        adapter.print(documentName);
    }
    catch (const exception& error) {
        cout << "Error: " << error.what() << endl;
    }

    return 0;
}
