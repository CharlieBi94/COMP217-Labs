// Exercise 3.9 Solution: Account.h
// Definition of Account class.
#include <iostream>
#include <string>

class Account {
public:
    // Account constructor with two parameters  
    Account(std::string accountName, int initialBalance)
        : name{ accountName } { // assign accountName to data member name

        // validate that the initialBalance is greater than 0; if not,
        // data member balance keeps its default initial value of 0
        if (initialBalance > 0) { // if the initialBalance is valid
            balance = initialBalance; // assign it to data member balance
        }
    }

    //creating a default constructor since one seems to be missing
    Account() : name{ "" }, balance{ 0 } {}



    // function that deposits (adds) only a valid amount to the balance
    void deposit(int depositAmount) {
        if (depositAmount > 0) { // if the depositAmount is valid
            balance = balance + depositAmount; // add it to the balance 
        }
    }

    // function that withdraws (subtracts) only a valid amount from the balance
    void withdraw(int withdrawalAmount) {
        if (withdrawalAmount > 0) { // if the depositAmount is valid
            balance = balance - withdrawalAmount; // subtract it from the balance 
        }
    }

    // function returns the account balance
    int getBalance() const {
        return balance;
    }

    // function that sets the name
    void setName(std::string accountName) {
        name = accountName;
    }

    // function that returns the name
    std::string getName() const {
        return name;
    }
private:
    std::string name; // account name data member 
    int balance{ 0 }; // data member with default initial value
};



/**************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/

