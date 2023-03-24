#include<iostream>
#include<string>

using namespace std;

class RBI { // Base Class
    protected:
        float min_interest_rate;
        float min_balance;
        float max_withdrawal_limit;
    public:
        RBI(float min_int_rate, float min_bal, float max_withdraw) {
            min_interest_rate = min_int_rate;
            min_balance = min_bal;
            max_withdrawal_limit = max_withdraw;
        }
};

class Account { // Base Class
    protected:
        float balance;
        int account_number;
        string account_type;
        string customer_name;
    public:
        Account(float bal, int acc_num, string acc_type, string cust_name) {
            balance = bal;
            account_number = acc_num;
            account_type = acc_type;
            customer_name = cust_name;
        }
        virtual void display_account_details() = 0;
};

class Customer { // Base Class
    protected:
        string name;
        string address;
        string phone_number;
    public:
        Customer(string cust_name, string cust_address, string cust_phone_number) {
            name = cust_name;
            address = cust_address;
            phone_number = cust_phone_number;
        }
};

class SBI : public RBI, public Account { // Derived Class
    public:
        SBI(float bal, int acc_num, string acc_type, string cust_name, string cust_address, string cust_phone_number, float min_int_rate, float min_bal, float max_withdraw) 
            : RBI(min_int_rate, min_bal, max_withdraw), Account(bal, acc_num, acc_type, cust_name), Customer(cust_name, cust_address, cust_phone_number) {}
        void display_account_details() {
            cout << "Account Details for " << customer_name << endl;
            cout << "Account Number: " << account_number << endl;
            cout << "Account Type: " << account_type << endl;
            cout << "Customer Name: " << customer_name << endl;
            cout << "Customer Address: " << address << endl;
            cout << "Customer Phone Number: " << phone_number << endl;
            cout << "Balance: " << balance << endl;
            cout << "Minimum Interest Rate: " << min_interest_rate << endl;
            cout << "Minimum Balance: " << min_balance << endl;
            cout << "Maximum Withdrawal Limit: " << max_withdrawal_limit << endl;
        }
};

int main() {
    SBI sbi(5000, 12345, "Saving", "John Doe", "123 Main St", "555-555-5555", 4.0, 1000, 5000);
    sbi.display_account_details();
    return 0;
}

