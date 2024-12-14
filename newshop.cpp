#include<iostream>
using namespace std;

float onlineShopping(void);

int main() {
    char startValue;
    char choiceAgain;
    
    startLevel:
    cout << "please enter s to start the shopping " << endl;

    start:
    cin >> startValue;

    if (startValue == 's' || startValue == 'S') {
        float totalAmount = onlineShopping();
        cout << "total bill amount is " << totalAmount << endl;

        shopAgain:
        cout << "do you want shopping again, y or n" << endl;
        cin >> choiceAgain;

        if (choiceAgain == 'y' || choiceAgain == 'Y') {
            goto startLevel;
        }
        else if (choiceAgain == 'n' || choiceAgain == 'N') {
            cout << "thanks for shopping" << endl;
        }
        else {
            cout << "you have entered wrong option, please type again" << endl;
            goto shopAgain;
        }
    }
    else {
        cout << "you have entered wrong option, please type s to start" << endl;
        goto start;
    }
}

float onlineShopping() {
    char choice;
    char item;
    int quantity;
    float billAmount = 0;

    itemLevel:
    cout << "**********welcome to online shopping************" << endl;
    cout << "-----------please follow the instruction----------" << endl;
    cout << "(1) please enter m to order the mobile phones" << endl;
    cout << "(2) please enter l to order the laptop" << endl;
    cout << "(3) please enter d to order the desktops" << endl;
    cout << "(4) please enter s to order the speaker" << endl;
    cout << "(5) please enter h to order the headphones phones" << endl;
    cin >> choice;

    // Code for mobile phones
    if (choice == 'm' || choice == 'M') {
        mobileLevel:
        cout << "Mobile details" << endl;
        cout << "(1) Apple => price : 40000" << endl;
        cout << "(2) Vivo => price : 25000" << endl;
        cout << "(3) Oppo => price : 20000" << endl;
        cout << "(4) Redmi => price : 18000" << endl;
        cout << "(5) Realme => price :17000" << endl;
        cout << "(6) Samsung => price : 25000" << endl;
        cout << "please enter your choice" << endl;
        cin >> item;

        if (item == '1') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 40000;
        }
        else if (item == '2') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 25000;
        }
        else if (item == '3') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 20000;
        }
        else if (item == '4') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 18000;
        }
        else if (item == '5') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 17000;
        }
        else if (item == '6') {
            cout << "Enter quantity" << endl;
            cin >> quantity;
            billAmount += quantity * 20000;
        }
        else {
            cout << "You have entered a wrong option, please type again" << endl;
            goto mobileLevel;
        }
    }
    // Other product categories (desktops, laptops, speakers, headphones) would follow a similar structure.
    return billAmount;
}


