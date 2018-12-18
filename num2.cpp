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
	int num; 
	int answer,i; 

	cout << "Enter a positive integer: ";
	cin >> num;
	
	cout << "\nThe factorial of " << num << " is ";
	factorial (num);
	
	return 0;
}
