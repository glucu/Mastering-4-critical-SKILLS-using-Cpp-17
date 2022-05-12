#include<iostream>
using namespace std;

/* My answer:
 *
 * a = 1 1 2 3 5
 * b = 1 2 3 5 8
 * c = 2 3 5 8 13
 * Output: 8
 */

int main() {

	int a = 1, b = 1, c;

	cout<<(c = a+b, a = b, b = c,
		   c = a+b, a = b, b = c,
		   c = a+b, a = b, b = c,
		   c = a+b, a = b, b = c) <<endl;

	return 0;
}

