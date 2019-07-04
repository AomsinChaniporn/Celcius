#include<iostream>
using namespace std;
int main() 
{
	float Celcius;
	cout << "Enter Celcius temperature : ";
	cin >> Celcius;
	cout << "Fharenheit is " << (1.8000 * Celcius) + 32;
	cout << endl;
	cout << " Now weather in Thailand is " ;
	cout << ((Celcius > 70) == 0 ? " HOT " : " COOL \n");
	cout << endl;
	cout << "Enter Celcius temperature : ";
	cin >> Celcius;
	cout << "Fharenheit is " << (1.8000 * Celcius) + 32;
	cout << endl;
	cout << " Now weather in Thailand is ";
	cout << ((Celcius < 70) == 1 ? " COOL " : " HOT ");
	cout << endl;
	return(0);
}