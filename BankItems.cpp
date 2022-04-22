// class definition of BankItems

#include "BankItems.h"
#include "sstream"

using std::stringstream;
using std::to_string;

// default constructor set default value to data members
BankItems::BankItems()
{
    _name = "NoName ";
    _age = -1;
    _income = -1;
    _balance = -1;
}

// constructor set value of data members based on the parameter's value
BankItems::BankItems(string name, int age, int income, int balance)
{
    _name = name;
    _age = age;
    _income = income;
    _balance = balance;
}

// constructor set value of data members based on the parameters value, if parameter not  complete then set default value
BankItems::BankItems(string name, int age, int income)
{
    _name = name;
    _age = age;
    _income = income;
    _balance = -1;
}

// constructor set value of data members based on the parameters value, if parameter not  complete then set default value
BankItems::BankItems(string name, int age)
{
    _name = name;
    _age = age;
    _income = -1;
    _balance = -1;
}

// constructor set value of data members based on the parameters value, if parameter not  complete then set default value
BankItems::BankItems(string name)
{
    _name = name;
    _age = -1;
    _balance = -1;
    _income = -1;
}

// getName return name that's set to data members of name
string BankItems::GetName() const
{
    return _name;
}

//getAge returns age that's set to data members of age
int BankItems::GetAge() const
{
    return _age;
}

//getIncome returns income that's set to data member of income
int BankItems::GetIncome() const
{
    return _income;
}

// getbalance return income that's set to data member of balance
int BankItems::GetBalance() const
{
    return _balance;
}

// ToString return string representation of data
string BankItems::ToString() const
{
    stringstream ss;
    ss << _name << ", age: " << _age << ", Income: " << to_string(_income) << ", Balance: " << to_string(_balance);
    return ss.str();
}

// ToJson return json representation of data
string BankItems::ToJson() const
{
    stringstream ss;
    ss << "{\"Name\":\" " << _name << "\", \"Age\": " << to_string(_age) << ", \"Income\": "
    << to_string(_income) << ", \"Balance\": " << to_string(_balance) << "}";
    return ss.str();
}

