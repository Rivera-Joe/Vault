#include "menu.h"



void menu() {
	int select;
	string v = "vault";
	cout << "Welcome to the " << v << ", how can I help you today?" << endl;
	cout << "1 - Save New Account\n"
		<< "2 - Search For an Account\n"
		<< "3 - Delete an Account\n";
	cin >> select;
	switch (select) {
	case 1:
		cout << "What is the account for?\n";
		profile s;
		s.setSource();
		
	}
}
