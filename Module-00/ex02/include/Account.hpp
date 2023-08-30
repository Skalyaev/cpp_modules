#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

class Account
{
public:
        typedef Account t;

        Account(int initial_deposit);
        ~Account();

        static int getNbAccounts(void);
        static int getTotalAmount(void);
        static int getNbDeposits(void);
        static int getNbWithdrawals(void);
        static void displayAccountsInfos(void);

        void makeDeposit(int deposit);
        bool makeWithdrawal(int withdrawal);
        int checkAmount(void) const;
        void displayStatus(void) const;

private:
        Account();

        static void _displayTimestamp(void);

        static int _nbAccounts;
        static int _totalAmount;
        static int _totalNbDeposits;
        static int _totalNbWithdrawals;

        int _accountIndex;
        int _amount;
        int _nbDeposits;
        int _nbWithdrawals;
};
#endif