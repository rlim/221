#include <iostream>

using namespace std;
int globalArr[10];

void fillArray();
void fillArray(int begin, int increment);

int main() 
{
	fillArray(0, 5);
	for(int i =0; i<10; i++) {
		cout << globalArr[i] << endl;
	}
	return 0;
}
void fillArray() 
{
	for(int i=0; i<10; i++) {
		globalArr[i] = i+1;
	}
}
void fillArray(int begin, int increment) 
{	
	for(int i=0; i<10; i++) {
		globalArr[i] = (i * increment) + begin;
	}
}

