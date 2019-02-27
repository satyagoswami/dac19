#include<iostream>
//#include<string>
using namespace std;
int ar[10];
int top = 0;

void add(int a, int b) {
	if (top < 0) {
		cout << "stack is underflow" << endl;
	}
	else if (top > 9) {
		cout << "stack is overflow" << endl;
	}
	else {
		ar[top] = (a + b);
	}
	cout << "top value is";
	cout << ar[top];
	top++;
}
void pop() {
	if (top < 0) {
		cout << "stack is underflow" << endl;
	}
	else  {
		cout << "stack is overflow" << endl;
	}
	top--;
}
void subtract(int a, int b) {
	if (top < 0) {
		cout << "stack is underflow" << endl;
	}
	else if (top > 9) {
		cout << "stack is overflow" << endl;
	}
	else {
		ar[top] = (a - b);
	}
	cout << "top value is";
	cout << ar[top];
	top++;
}
void multi(int a, int b) {
	if (top < 0) {
		cout << "stack is underflow" << endl;
	}
	else if (top > 9) {
		cout << "stack is overflow" << endl;
	}
	else {
		ar[top] = (a * b);
	}
	cout << "top value is";
	cout << ar[top];
	top++;
}
void divide(int a, int b) {
	if (top < 0) {
		cout << "stack is underflow" << endl;
	}
	else if (top > 9) {
		cout << "stack is overflow" << endl;
	}
	else {
		ar[top] = (a / b);
	}
	cout << "top value is";
	cout << ar[top];
	top++;
}

void main() {
	while (1) {
	int a;
	int b;
	int choice;
	cout << "Enter first num";
	cin >> a;
	cout << "Enter second num";
	cin >> b;
	/*add(a, b);
	pop();
	subtract(a, b);
	multi(a, b);
	divide(a, b);*/
	cout << "Enter your choice for add press 1 press 2 pop press 3 subtract press 4 multi press 5 divide press 6 exit";
	cin >> choice;
	switch (choice) {
	case 1:
		add(a, b);
		break;
	case 2:
		pop();
		break;
	case 3:
		subtract(a, b);
		break;
	case 4:
		multi(a, b);
		break;
	case 5:
		divide(a, b);
	case 6:
		exit(0);
		break;
	defult:
		cout << "enter invalid choice";
	}

	}

}

	/*int a, b, c;
	int choice;
	cout << "The lower limit of integer" << INT_MIN << endl;
	cout << "The upper limit of integer" << INT_MAX << endl;
	cout << "Enter first num" << endl;
	cin >> a;
	cout << "Enter sec num " << endl;
	cin >> b;
	cout << "Enter you choice" << endl;
		cout << "press 1 to add /n press 2 subtract /n press 3  multiply /n press 4 divide" << endl;
	cin >> choice;
	switch (choice) {
	case 1:
		c = a + b;
		if (c < INT_MIN)
		{
			cout << "overflow occurs" << endl;
		}
		else
		{
			cout << "underflow occurs" << endl;

		}
		break;
	case 2:
		c = a - b;
		if (c < INT_MIN)
		{
			cout << "overflow occurs" << endl;
		}
		else
		{
			cout << "underflow occurs" << endl;

		}
		break;
	case 3:
		c = a * b;
		if (c < INT_MIN)
		{
			cout << "overflow occurs" << endl;
		}
		else
		{
			cout << "underflow occurs" << endl;

		}
		break;
	case 4:
		c = a / b;
		if (c < INT_MIN)
		{
			cout << "overflow occurs" << endl;
		}
		else
		{
			cout << "underflow occurs" << endl;

		}
		break;
	defult:
		cout << "invalid enter choice ";
	}


}*/