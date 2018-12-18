#include <iostream>
using namespace std;

void factorial(int x){
	int answer, i;
	
	for (i = 0; i <= x; i++){
		if (i == 0)
		answer = 1;
		else
		answer = answer * i;
	}
	
	cout << answer;
}

int main(){
	int num, i, repeat; 

	do {
		cout << "Enter a number: ";
		cin >> num;
	
		cout << "\nThe factorial of " << num << " is ";
		factorial (num);
		
		cout << "\nWould you like to repeat? [1/0]: ";
		cin >> repeat;
	} while (repeat == 1);
	
	cout << "- Ended -";
	
	return 0;
}
