#include<iostream> 
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() 
{	bool a = true;
	while (a) {
		int num;
		cout << "Enter a number" << endl;
		cin >> num;
		srand(time(NULL));
		int randomNum = rand()%20;
		if (randomNum == num) {
			a = false;
		}
		else {
			cout << "That's the wrong number the number is " << randomNum << " " << endl;
			cout << "Do you want to continue? [y/n]" << endl;
			string yn;
			cin >> yn;
			if(yn == "N"| yn == "n") {
				return 0;
			}
		}
	}
	
	return 0;
}
