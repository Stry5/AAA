
#include <iostream>
using namespace std;

int main()
{
	int num1 = 2;
	int num2 = 1;
	int temp;

	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << num1 << ", " << num2;
}
/* output:
1, 2
*/
