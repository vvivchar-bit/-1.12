#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class ILogger {
public:
    virtual void log(const string& message) = 0;
    virtual ~ILogger() = default;
};

class ConsoleLogger : public ILogger {
public:
    void log(const string& message) override {
        cout << "Console logger: " << message << endl;
    }
};

class ReportService {
private:
    ILogger* logger;

public:
    ReportService(ILogger* loggerObject) {
        if (loggerObject == nullptr) {
            throw invalid_argument("Logger dependency cannot be null.");
        }

        logger = loggerObject;
    }

    void createReport(const string& reportName) {
        if (reportName.empty()) {
            throw invalid_argument("Report name cannot be empty.");
        }

        cout << "Report service started." << endl;
        cout << "Creating report: " << reportName << endl;

        logger->log("Report was created successfully.");

        cout << "Report service finished." << endl;
    }
};

int main() {
    string reportName;

    cout << "Enter report name: ";
    cin >> reportName;

    try {
        ConsoleLogger logger;
        ReportService reportService(&logger);

        reportService.createReport(reportName);
    }
    catch (const exception& error) {
        cout << "Error: " << error.what() << endl;
    }

    return 0;
}
