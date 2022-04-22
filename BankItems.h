// class declaration of BankItems
#ifndef BANKCLASS_BANKITEMS_H
#define BANKCLASS_BANKITEMS_H

#include <iostream>
using std::string;

class BankItems
{
private:
    string _name;                                              // data member holds name
    int _age;                                                  // data member holds age
    int _income;                                               // data member holds income
    int _balance;                                              // data member holds balance
public:
    BankItems();                                                  // default constructor
    BankItems(string name);                                       // class constructor one parameter
    BankItems(string name, int age);                              // class constructor two parameter
    BankItems(string name, int age, int income);
    BankItems(string name, int age, int income, int _balance);
    string GetName() const;                                         // class member to get Name
    int GetAge() const;                                             // class member to get Age
    int GetIncome() const;                                          // class member to get Income
    int GetBalance() const;                                         // class member to get balance
    string ToString() const;                                        // string representation of data
    string ToJson() const;                                          // json representation of data

};

#endif //BANKCLASS_BANKITEMS_H
