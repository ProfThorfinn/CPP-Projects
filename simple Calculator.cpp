#include <iostream>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Cannot divide by zero!\n";
        return 0;
    }
    return a / b;
}

int main() {
    float num1, num2;
    int choice;
    
    do {
        cout <<"Hi there Welcome to My Project, in this project i used only basics in c++ using functions only, this project is provide simple calculator, ease to use Let's try it! \n";
        cout<<endl;
        cout << "\nSimple Calculator\n";
        cout<<"___________________________________\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            switch (choice) {
                case 1:
                    cout << "Result: " << add(num1, num2) << endl;
                    break;
                case 2:
                    cout << "Result: " << subtract(num1, num2) << endl;
                    break;
                case 3:
                    cout << "Result: " << multiply(num1, num2) << endl;
                    break;
                case 4:
                    cout << "Result: " << divide(num1, num2) << endl;
                    break;
            }
        } else if (choice != 5) {
            cout << "Invalid choice! Please enter a number between 1 and 5.\n";
            cout <<"-------------------------\n";
            cout <<endl;
        }
    } while (choice != 5);

    cout << "Thank you for using this calculator!\n";
    return 0;
}
