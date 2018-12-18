#include <iostream>
using namespace std;

void max(int a, int b){
	if (a>b)
		cout << "\n" << a << " is larger than " << b << endl;
	else
		cout << "\n" << b << " is larger than " << a << endl;
}

int main (){
	int num1, num2, repeat;
	
	do {
	cout << "Please enter the first value: ";
	cin >> num1;
	cout << "Please enter the second value: ";
	cin >> num2;
	
	max(num1, num2);
	
	cout << "\nWould you like to repeat? [1/0]: ";
	cin >> repeat;
	system ("CLS");
	
	} while (repeat == 1);
	
	cout << "- Ended -";
	
	return 0;
}
