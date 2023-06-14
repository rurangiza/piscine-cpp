
#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <fstream>
#include <sstream>

int g_indexG = 0;
int g_totalAmount = 0;
int g_totalDeposits = 0;
int g_totalWithdrawals = 0;

std::fstream outFile;

//===---===---===---===---===---===---===---===---===---===---===---===---===---

Account::Account(int initial_deposit) {
    // Format: [19920104_091532] index:0;amount:42;created

    this->_accountIndex = g_indexG;
    if (this->_accountIndex == 0) {
        std::time_t now = std::time(nullptr);
        std::stringstream ss;
        ss << std::put_time(std::localtime(&now), "%Y%m%d_%H%M%S");
        std::string timestamp = ss.str();

        outFile.open(timestamp+".log", std::ios::out);
        if (!outFile.is_open())
            outFile << "Error: couldn't open outFile" << std::endl;
    }

    _displayTimestamp();
    g_indexG++;
    outFile << " index:" << this->_accountIndex;

    outFile << ";amount:" << initial_deposit;
    this->_amount = initial_deposit;
    outFile << ";created" << std::endl;

    g_totalAmount += this->_amount; // CHECK: is there better way? no global

    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    ;
}

Account::~Account() {
    // Format: [19920104_091532] index:0;amount:47;closed
    _displayTimestamp();
    outFile << " index:" << this->_accountIndex;
    outFile << ";amount:" << this->_amount;
    outFile << ";closed" << std::endl;

    g_indexG--;
    if (g_indexG == 0)
        outFile.close();
    ;
}

//===---===---===---===---===---===---===---===---===---===---===---===---===---

int
Account::getNbAccounts() {
    return g_indexG;
}

int
Account::getTotalAmount() {
    return g_totalAmount;
}

int
Account::getNbDeposits() {
    return g_totalDeposits;
}

int
Account::getNbWithdrawals() {
    return g_totalWithdrawals;
}

void
Account::displayAccountsInfos() {
    // Format: [19920104_091532] accounts:8;total:21524;deposits:8;withdrawals:0

    _displayTimestamp();

    outFile << " accounts:" << g_indexG;

    outFile << ";total:" << g_totalAmount;

    outFile << ";deposits:" << g_totalDeposits;

    outFile << ";withdrawals:" << g_totalWithdrawals << std::endl;
}

//===---===---===---===---===---===---===---===---===---===---===---===---===---

void
Account::makeDeposit(int deposit) {
    // Format: [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1

    _displayTimestamp();

    outFile << " index:" << this->_accountIndex;
    outFile << ";p_amount:" << this->_amount << ";";
    outFile << "deposit:" << deposit;

    g_totalAmount += deposit;
    this->_amount += deposit;
    outFile << ";amount:" << this->_amount;

    g_totalDeposits++;
    this->_nbDeposits++;
    outFile << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool
Account::makeWithdrawal(int withdrawal) {
    // Format: [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1

    _displayTimestamp();

    outFile << " index:" << this->_accountIndex;
    outFile << ";p_amount:" << this->_amount << ";";

    if (withdrawal > this->_amount) {
        outFile << "withdrawal:refused" << std::endl;
        return false;
    }
    outFile << "withdrawal:" << withdrawal;

    g_totalAmount -= withdrawal;
    this->_amount -= withdrawal;
    outFile << ";amount:" << this->_amount;

    g_totalWithdrawals++;
    this->_nbWithdrawals++;
    outFile << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;

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

    outFile << " index:" << this->_accountIndex;
    outFile << ";amount:" << this->_amount;
    outFile << ";deposits:" << this->_nbDeposits;
    outFile << ";withdrawals:" << this->_nbWithdrawals << std::endl;
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
    outFile << "[" << timestamp << "]";
}

Account::Account() {
    ;
}

