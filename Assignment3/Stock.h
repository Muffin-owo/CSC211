#include <iostream>
#include <string>
using namespace std;

#pragma once


class Stock {
private:
	string tickerSymbol;
	double lastprice;
	string companyName;
	int sharesOwned;

	bool validatePrice(double price);
	string validateSymbol(const string &tsymbol);


public:
	//ctor
	Stock();
	Stock(string tsymbol, double price, string name, int shares);

	//Destructor
	~Stock();

	// Mutators
    void setTickerSymbol(const string &tsymbol);
    void setLastPrice(double price);
    void setCompanyName(const string &name);
    void setSharesOwned(int shares);


	//Accessors
	string getTickerSymbol() const;
	double getLastPrice() const;
	string getCompanyName() const;
	int getSharesOwned() const;

	double getHoldingValue() const;
	void display() const;

};



