
#include <iostream>
#include <fstream>
#include <string>
#include "Stock.h"

using namespace std;

const int SIZE = 30;


//Read file function
double ReadFile(const string &filename, Stock *p_ArrStock[SIZE], int &count) {
    ifstream stockfile(filename);


    string symbol, company;
    double price;
    count = 0;
    double Total = 0.0;

    //Read the file data
    while (count < SIZE) {
        //store the symbol from file
        getline(stockfile, symbol);
        //store the company name from file
        getline(stockfile, company);
        //store the last price from file
        stockfile >> price;
        stockfile.ignore();


        //creating a new instance of a stock class for each stock read in
        p_ArrStock[count] = new Stock(symbol, price, company, 10);

        //output


        cout << "---- Stock " << (count + 1) << " ----" << endl;

        p_ArrStock[count]->display();


        Total += p_ArrStock[count]->getHoldingValue();

        count++;
    }

    return Total;

}


int main() {

    Stock *p_ArrDay1[SIZE];
    Stock *p_ArrDay2[SIZE];
    int countday1 = 0;
    int countday2 = 0;
    double totalday1, totalday2, change;

    //Read the StockDay1.txt and store the total of day1
    totalday1 = ReadFile("StockDay1.txt", p_ArrDay1, countday1);
  
    //Read the StockDay2.txt and store the total of day2
    totalday2 = ReadFile("StockDay2.txt", p_ArrDay2, countday2);
  
    //calculate the change
    change = totalday1 - totalday2;

    cout << "--------------------------------------" << endl;
    cout << "Total Portfolio Value in Day1 is $" << totalday1 << endl;
    cout << "Total Portfolio Value in Day2 is $" << totalday2 << endl;
    cout << "The change of the two portfolios is $" << change << endl;


    //delete each element of the array
    for (int i = 0; i < countday1; i++) {
        delete p_ArrDay1[i];
    }

    for (int i = 0; i < countday2; i++) {
        delete p_ArrDay2[i];
    }


	return 0;
}