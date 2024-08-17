//--------------------------------------------------------------------
// CS215-402 LAB 1 000 
//--------------------------------------------------------------------
// Author: Gavin Crain
// Date: 1/30/2020
// Description: Incomes based in hours, pay rate, and taxes.
//---------------
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int num1, num2, num3;	cout << "Enter number 1: ";	cin >> num1;	cout << "Enter number 2: ";	cin >> num2;	cout << "Enter number 3: ";	cin >> num3;  	if ((num1 >= num2) && (num2 >= num3)) {		cout << "Sorted they are " << num3 << " " << num2 << " " << num1;	}	else if ((num1 >= num3) && (num3 >= num2)) {		cout << "Sorted they are " << num2 << " " << num3 << " " << num1;	}	else if ((num2 >= num1) && (num1 >= num3)) {		cout << "Sorted they are " << num3 << " " << num1 << " " << num2;	}	else if ((num2 >= num3) && (num3 >= num1)) {		cout << "Sorted they are " << num1 << " " << num3 << " " << num2;	}	else if ((num3 >= num1) && (num1 >= num2)) {		cout << "Sorted they are " << num2 << " " << num1 << " " << num3;	}	else if ((num3 >= num2) && (num2 >= num1)) {		cout << "Sorted they are " << num1 << " " << num2 << " " << num3;	}
	cout << "\n\n";


	char choice;
	const int aleppo = 30000;
	const int banana = 1000;
	const int cayenne = 40000;
	const int dragon = 2480000;

	cout << "A. Aleppo Pepper \n";
	cout << "B. Banana Pepper \n";
	cout << "C. Cayenne Pepper \n";
	cout << "D. Dragons Breath \n";
	cout << "Enter a letter to choose a pepper: ";
	cin >> choice;
	int heat=0;
	switch (choice) {
	case 'A':
	case 'a': heat = aleppo;
		break;
	case 'B':
	case 'b': heat = banana;
		break;
	case 'C':
	case 'c': heat = cayenne;
		break;
	case 'D':
	case 'd': heat = dragon;
		break;
	default: cout << "That pepper is not on the list.";
	}

	if (heat != 0) {
		cout << "That's " << heat << " SU of heat! \n";
	}
	cout << "\n";
	system("pause");
	return 0;
}