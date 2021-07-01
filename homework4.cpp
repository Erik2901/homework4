#include <iostream>
using namespace std;

void ex1(){
    int a,b;
    cout << "Write two numbers:";
    cin >> a >> b;
    if (a + b >= 10 && a + b <= 20) {
        cout << "It's True" << endl;
    }
    else {
        cout << "It's False" << endl;
    }
}
void ex2(){
    const int a = 8;
    const int b = 2;
    if ((a == 10 && b == 10) || (a+b == 10)) {
        cout << "It's True" << endl;
    }
    else {
        cout << "It's False" << endl;
    }
}
void ex3() {
    for (int i=1; i < 50; i++) {
        if (i%2 != 0) {
            cout << i << " ";
        }
    }
}
void ex4() {
    int number = 0;
    bool simple = true;
    cout << "Enter your number from 1 to 10000:";
    cin >> number;
    while (number <= 1 || number >= 10000) {
        cout << "Your number is wrong, enter a new one from 1 to 10000:";
        cin >> number;
    }
    for (int i = 2; i < number; i++)
    {
         if (number % i == 0) {
            simple = false;
            break;
         }

    }
    if (simple == false) {
        cout << "Your number is not Simple" << endl;
    }
    else {
        cout << "Your number is Simple" << endl;
    }
}
void ex5() {
    int year;
    cout << "Enter year from 1 to 3000:";
    cin >> year;
    while (year <= 1 || year >= 3000) {
        cout << "Your year is wrong, enter a new one from 1 to 3000:";
        cin >> year;
    }
    if (year < 100 && year % 4 == 0) {
        cout << "It's a leap year" << endl;
    }
    else if ((year > 100 && year < 399) && (year % 100 != 0 && year % 4 == 0)) {
        cout << "It's a leap year" << endl;
    }
    else if ((year > 399) && (year % 400 == 0 || year % 4 == 0)) {
        cout << "It's a leap year" << endl;
    }
    else {
        cout << "It's not a leap year" << endl;
    }
}
int main()
{
    ex1();
   // ex2();
   // ex3();
   // ex4();
   // ex5();


    system("pause");
    return 0;
}

