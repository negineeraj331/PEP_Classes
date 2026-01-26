//basic calculator with function case of right shift and left shift operators and bitwise operators should be there  also or,and and xor should be added, make use of pointers and reference here and call all function
#include<iostream>
using namespace std;
void add(float *a, float *b) {
    cout << *a << "+" << *b << "=" <<(*a + *b) << endl;
}
void subtract(float *a, float *b) {
    cout << *a << "-" << *b << "=" <<(*a - *b) << endl;
}
void multiply(float *a, float *b) {
    cout << *a << "*" << *b << "=" <<(*a * *b) << endl;
}
void divide(float *a, float *b) {
    if (*b != 0) {
        cout << *a << "/" << *b << "=" <<(*a / *b) << endl;
    } else {
        cout << "Division by zero error" << endl;
    }
}
void bitwise_and(int *a, int *b) {
    cout << *a << "&" << *b << "=" <<(*a & *b) << endl;
}
void bitwise_or(int *a, int *b) {
    cout << *a << "|" << *b << "=" <<(*a | *b) << endl;
}
void bitwise_xor(int *a, int *b) {
    cout << *a << "^" << *b << "=" <<(*a ^ *b) << endl;
}
void left_shift(int *a, int *b) {
    cout << *a << "<<" << *b << "=" <<(*a << *b) << endl;
}
void right_shift(int *a, int *b) {
    cout << *a << ">>" << *b << "=" <<(*a >> *b) << endl;
}
int main() {
    char op;
    float num1, num2;
    int int1, int2;

    cout << "Enter operator (+, -, *, /, &, |, ^, <<, >>): ";
    cin >> op;

    if (op == '&' || op == '|' || op == '^' || op == '<' || op == '>') {
        cout << "Enter two integer operands: ";
        cin >> int1 >> int2;
        switch (op) {
            case '&':
                bitwise_and(&int1, &int2);
                break;
            case '|':
                bitwise_or(&int1, &int2);
                break;
            case '^':
                bitwise_xor(&int1, &int2);
                break;
            case '<':
                left_shift(&int1, &int2);
                break;
            case '>':
                right_shift(&int1, &int2);
                break;
            default:
                cout << "Error! Operator is not correct" << endl;
                break;
        }
    } else {
        cout << "Enter two float operands: ";
        cin >> num1 >> num2;
        switch (op) {
            case '+':
                add(&num1, &num2);
                break;
            case '-':
                subtract(&num1, &num2);
                break;
            case '*':
                multiply(&num1, &num2);
                break;
            case '/':
                divide(&num1, &num2);
                break;
            default:
                cout << "Error! Operator is not correct" << endl;
                break;
        }
    }

    return 0;
}