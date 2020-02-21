//Q542W533
//Colter Wright
//Lab 2
#include <iostream>;
using namespace std;
int main()
{
	int first[20], second[20], n;//intitalizing arrays and variable
	
		cout << "enter number of elements: ";//initalizes n as the amout of spaces used in array
		cin >> n;
		if (n < 20 && n>0)//checks range
		{
			cout << "enter " << n << " elements: ";
			for (int i = 0; i < n; i++)cin >> first[i];//enters first set of integers
			cout << "enter " << n << " elements: ";
			for (int i = 0; i < n; i++) cin >> second[i];//enters second set of integers
			for (int i = 0; i < n; i++) cout << first[i] * second[i] << ", ";//does computation and lists
		}
		else cout << "out of range please enter number between 1-20";//out of range statement
	
};