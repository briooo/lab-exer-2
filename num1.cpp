#include <iostream>
using namespace std;

void max(int x, int y){
	cout << "\nThe largest number is ";
	if (x>y)
		cout << x;
	else
		cout << y;
}

int main (){
	int x, y;
	
	cout << "Please enter the first value: ";
	cin >> x;
	cout << "Please enter the second value: ";
	cin >> y;
	
	max(x,y);
	
	cout << "Would you like to repeat? [1/0]"
	
	return 0;
}
