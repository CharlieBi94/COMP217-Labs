#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {

	/*
	* Initializing empty object and testing member functions
	*/

	Account myAccount;

	cout << "Initial account name  in obj myAccount is: " << myAccount.getName();

	cout << "\nPlease enter the account name: ";
	string theName;
	getline(cin, theName);
	myAccount.setName(theName);

	cout << "Name in obj myAccount is: " << myAccount.getName() << endl;

	/*
	* Using constructor with arguments
	*/

	Account a1("Charlie Bi", 35);

	cout << "\nCreating an account with name " << a1.getName() << " and balance of " << a1.getBalance() << endl;

	/*
	* Testing deposit and widthdrawl functions
	*/

	Account a2("Jane Green", 50);
	Account a3("John Blue", -7);

	//display initial balance of each object

	cout << "account 2: " << a2.getName() << " balance is $" << a2.getBalance() << endl;
	cout << "account 3: " << a3.getName() << " balance is $" << a3.getBalance() << endl;

	cout << "\nEnter deposit amount for account 2: ";
	int depositAmount;
	cin >> depositAmount;
	cout << "\nAdding " << depositAmount << " to account 2 balance..." << endl;
	a2.deposit(depositAmount);
	cout << "\n\nAccount 2 balance: $" << a2.getBalance() << endl;
	cout << "Account 3 balance: $" << a3.getBalance() << endl;

	cout << "\nEnter deposit amount for account 3: ";
	cin >> depositAmount;
	cout << "\nAdding " << depositAmount << " to account 3 balance..." << endl;
	a3.deposit(depositAmount);
	cout << "Account 2 balance: $" << a2.getBalance() << endl;
	cout << "Account 3 balance: $" << a3.getBalance() << endl;

	return 0;
}
