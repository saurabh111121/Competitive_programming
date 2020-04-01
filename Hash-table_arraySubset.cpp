#include<iostream>
using namespace std;

int tr(int a[], int b[], int c, int d) {
	int i=0;
	int j=0;
	for (i = 0; i < d; i++) {
		for (j = 0; j < c; j++) {
			if (b[i] == a[j]) {
				break;
			}
			if (j == d) {
				return 0; // false
			}
		}
	}
	return 1; //true
}

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = {2,8};

	int a_size = sizeof(a) / sizeof(a[0]);
	int b_size = sizeof(b) / sizeof(b[0]);

	if (tr(a, b, a_size, b_size)) {
		cout << "yes";
	}
	else {
		cout << " no" ; 
	}
	 



}
