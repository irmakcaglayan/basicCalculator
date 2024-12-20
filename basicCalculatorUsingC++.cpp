#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    double num1, num2, result;
    cout << "Enter your first number: "; cin >> num1;
    cout << "Enter your second number: "; cin >> num2;
    cout << "Choose the function you want to use (1-4):\n";
    cout << "1. Addition (+)\n" << "2. Subtraction (-)\n" << "3. Multiplication (*)\n" << "4. Division (/)\n";
    cin >> choice;

    switch (choice)
    {
    case 1:
        result = num1 + num2;
        cout << "Result = " << result;
        break;
    case 2:
        result = num1 - num2;
        cout << "Result = " << result;
        break;
    case 3:
        result = num1 * num2;
        cout << "Result = " << result;
        break;
    case 4:
        if (num2 != 0){
            result = num1 / num2;
            cout << "Result = " << result;}
        else {
            cout << "ERROR: Dividing by zero (0) is not possible!";
        
           }
        break;
    default:
        cout << "Invalid Choices!";
        
    }
    return 0;
}
