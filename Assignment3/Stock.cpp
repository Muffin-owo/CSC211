#include "Stock.h"
#include <iostream>
#include <string>
using namespace std;

//ctor
Stock::Stock() {
    tickerSymbol = "?";
    lastprice = 0.0;
    companyName = "?";
    sharesOwned = 0;
}

//ctor
Stock::Stock(string tsymbol, double price, string name, int shares) {
    setTickerSymbol(tsymbol);
    setLastPrice(price);
    setCompanyName(name);
    setSharesOwned(shares);
}

//Destructor
Stock::~Stock() {

}

//Validate price is positive number
bool Stock::validatePrice(double price) {
    return price > 0.0;
}


string Stock::validateSymbol(const string &tsymbol){
    
    string symbol;

    //looping for checking the variable only allow using A-Z/ a-z
    for (char c : tsymbol) {
        if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))) {
            cout << "Unknown Symbol (please use A-Z)" << endl;
            return "?";
        }

        // Convert lowercase to uppercase
        if (c >= 'a' && c <= 'z') {

            c = c - 'a' + 'A';
        }
        symbol += c;
    }

    //check the length size of the symbol whether 1-4
    if (symbol.size() > 4) {
        cout << "At most using 4 letters" << endl;
        return "?";
    }
    return symbol;
}



// Mutators
void Stock::setTickerSymbol(const string& tsymbol) {
    //validate the symbol
    tickerSymbol = validateSymbol(tsymbol);
}

void Stock::setLastPrice(double price) {
    //validate the price
    if (!validatePrice(price)) {
        cout << "The price must be positive number!" << endl;
    }
    lastprice = price;
}


void Stock::setCompanyName(const string &name) {
    companyName = name;
}

void Stock::setSharesOwned(int shares) {
    sharesOwned = shares;
}

// Accessors
string Stock::getTickerSymbol() const { return tickerSymbol; }
double Stock::getLastPrice() const { return lastprice; }
string Stock::getCompanyName() const { return companyName; }
int Stock::getSharesOwned() const { return sharesOwned; }

//Calculation the holding value
double Stock::getHoldingValue() const {
    return lastprice * sharesOwned;
}

//Display
void Stock::display() const {
    cout << tickerSymbol << " " << companyName << endl;
    cout << "Price: $" << lastprice << endl;
    cout << "Shares: " << sharesOwned << endl;
    cout << "Value: $" << getHoldingValue() << endl;

}