#include <iostream> 
#include "Header.h" 
using namespace std;

int main()
{
	Stack my;
	my.push(121);
	my.push(13);
	my.push(2);
	my.push(5);
	my.push(3);
	cout << "It's my stack:\n";
	my.print();
	my.pop();
	cout << my.top() << endl;
	my.print();
	system("pause");
	return 0;
}