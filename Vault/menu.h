
#ifndef MENU_H
#define MENU_H
#pragma once


#include<string>
#include<iostream>
using namespace std;



void menu();

class profile {
public:
	
	void setSource() {
		string SourceName;
		cin >> SourceName;
		source = SourceName;
		cout << SourceName + " stored\n";

		
	};
	string getSource() {
		return source;
	};
	void setAccount() {
		string UserName;
		cin >> UserName;
		account = UserName;

		cout << UserName + " stored";
	};

	string getAccount() {
		account;
	};

	void setPassword(string PassW) {
		PassW = password;
	};

	string getPassword() {
		password;
	};

private:
	string source;
	string account;
	string password;
};
#endif // !MENU_H