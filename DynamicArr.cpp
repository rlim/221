#include <iostream> 
#include <fstream>
int main() {
	int* seq = NULL; //seq = 0
	double sum_val = 2.397; //2.397
	seq = Sequence(1,3);
	printf(seq);
	return 0;
}
int* Sequence(int start, int n) { //start = 1, n = 3
	int* result = new int[n];
	for(int i = 0; i<n; i++) {
		result [i] = start+i;
		}
	return result;
}
