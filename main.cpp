// Title:
// Purpose:
// Enjoy the process - Practice makes improvement
// Author: Fransiskus Agapa

#include <iostream>
#include "BankItems.h"

using std::cout;
using std::endl;

int main()
{
    BankItems user;                                                             // create object type class BankItem gives its object access to public member in class
    BankItems userOne("Linda");
    BankItems userTwo("Gates", 20);
    BankItems userThree("Anon", 30, 30000);
    BankItems userFour("Nymous", 28, 50000, 1000000000);

    cout << endl;
    cout << user.ToString() << endl;
    cout << user.ToJson() << endl << endl;

    cout << userOne.ToString() << endl;
    cout << userOne.ToJson() << endl << endl;

    cout << userTwo.ToString() << endl;
    cout << userTwo.ToJson() << endl << endl;

    cout << userThree.ToString() << endl;
    cout << userThree.ToJson() << endl << endl;

    cout << userFour.ToString() << endl;
    cout << userFour.ToJson() << endl;

    return 0;
}
