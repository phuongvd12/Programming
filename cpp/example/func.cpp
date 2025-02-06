#include <iostream>

using namespace std;

void xinchao(void); // function prototype
void function1(int =2);

int main()
{
	xinchao();
	function1(1);
	function1();
	return 0;
}


void xinchao(void) // function definition
{
	cout << "xin chao cac ban" << endl;
}

void function1(int input)
{
	cout << "function1 is calling" << input << endl;
}
