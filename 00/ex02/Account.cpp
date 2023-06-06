
#include "Account.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

#define CGRAY "\033[0;37m"
#define CRED "\033[0;31m"
#define CGREEN "\033[0;32m"
#define CORANGE "\033[0;33m"
#define CBLUE "\033[0;34m"
#define CRESET "\033[0m"
#define CBOLD "\033[1m"

int g_indexG = 0;
int g_totalAmount = 0;
int g_totalDeposits = 0;
int g_totalWithdrawals = 0;

//===---===---===---===---===---===---===---===---===---===---===---===---===---

Account::Account(int initial_deposit) {
    // Format: [19920104_091532] index:0;amount:42;created

    _displayTimestamp();
    this->_accountIndex = g_indexG;
    g_indexG++;
    std::cout << " index:" << this->_accountIndex;

    std::cout << ";amount:" << initial_deposit;
    this->_amount = initial_deposit;
    std::cout << CGRAY ";created" CRESET << std::endl;

    g_totalAmount += this->_amount; // CHECK: is there better way? no global

    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    ;
}

Account::~Account() {
    // Format: [19920104_091532] index:0;amount:47;closed
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << CGRAY ";closed" CRESET << std::endl;
    ;
}

//===---===---===---===---===---===---===---===---===---===---===---===---===---

int
Account::getNbAccounts() {
    return 0;
}

int
Account::getTotalAmount() {
    return 0;
}

int
Account::getNbDeposits() {
    return 0;
}

int
Account::getNbWithdrawals() {
    return 0;
}

void
Account::displayAccountsInfos() {
    // Format: [19920104_091532] accounts:8;total:21524;deposits:8;withdrawals:0

    _displayTimestamp();

    std::cout << CBLUE;
    std::cout << " accounts:" << g_indexG;

    std::cout << ";total:" << g_totalAmount;

    std::cout << ";deposits:" << g_totalDeposits;

    std::cout << ";withdrawals:" << g_totalWithdrawals << std::endl;
    std::cout << CRESET;

}

//===---===---===---===---===---===---===---===---===---===---===---===---===---

void
Account::makeDeposit(int deposit) {
    // Format: [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1

    _displayTimestamp();

    std::cout << " index:" << this->_accountIndex;
    std::cout << ";p_amount:" << this->_amount << ";";
    std::cout << CGREEN "deposit:" << deposit << CRESET;

    this->_amount += deposit;
    std::cout << ";amount:" << this->_amount;

    this->_nbDeposits++;
    std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;



    ;
}

bool
Account::makeWithdrawal(int withdrawal) {
    // Format: [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1

    _displayTimestamp();

    std::cout << " index:" << this->_accountIndex;
    std::cout << ";p_amount:" << this->_amount << ";";

    if (withdrawal > this->_amount) {
        std::cout << CRED "withdrawal:refused" CRESET << std::endl;
        return false;
    }
    std::cout << CRED "withdrawal:" << withdrawal << CRESET;

    this->_amount -= withdrawal;
    std::cout << ";amount:" << this->_amount;

    this->_nbWithdrawals++;
    std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;

    return true;
}

int
Account::checkAmount() const {
    return 0;
}

void
Account::displayStatus() const {
    // Format : [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
    _displayTimestamp();

    std::cout << " index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";deposits:" << this->_nbDeposits;
    std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

// PRIVATE ===---===---===---===---===---===---===---===---===---===---===---===

void
Account::_displayTimestamp() {
    // Get the current time
    std::time_t now = std::time(nullptr);

    // Format the time as a string
    char timestamp[16];
    std::strftime(timestamp, sizeof(timestamp), "%Y%m%d_%H%M%S", std::localtime(&now));

    // Display the timestamp
    std::cout << "[" << timestamp << "]";
}

Account::Account() {
    ;
}

