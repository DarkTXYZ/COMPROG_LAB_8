#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double initloan , rate , pay;
	cout << "Enter initial loan: ";
	cin >> initloan ; 
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	int year = 1;
	while(initloan > 0){
		cout << fixed << setprecision(2);
		cout << setw(13) << left << year; 
		cout << setw(13) << left << initloan;
		double interest = initloan * rate / 100.0;
		cout << setw(13) << left << interest;
		cout << setw(13) << left << interest + initloan;
		if(interest + initloan < pay)
			cout << setw(13) << left << interest + initloan;
		else
			cout << setw(13) << left << pay;
		initloan = (initloan + interest) - pay;
		if(initloan < 0)
			initloan = 0;
		cout << setw(13) << left << initloan;
		cout << "\n";
		year++;
	}
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	return 0;
}
