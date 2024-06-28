#include <iostream>
#include <string>

class BankAccount {
private:
    std::string account_number;
    std::string account_holder;
    double balance;

public:
    // Constructor
    BankAccount(const std::string& acc_number, const std::string& acc_holder, double initial_balance = 0.0)
        : account_number(acc_number), account_holder(acc_holder), balance(initial_balance) {}

    // Deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited: " << amount << " into account " << account_number << std::endl;
        } else {
            std::cout << "Invalid amount for deposit." << std::endl;
        }
    }

    // Withdraw money from the account if sufficient balance is available
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawn: " << amount << " from account " << account_number << std::endl;
        } else {
            std::cout << "Insufficient balance or invalid amount for withdrawal." << std::endl;
        }
    }

    // Get the current balance of the account
    double get_balance() const {
        return balance;
    }

    // Get the account holder's name
    std::string get_account_holder() const {
        return account_holder;
    }

    // Get the account number
    std::string get_account_number() const {
        return account_number;
    }
    

};