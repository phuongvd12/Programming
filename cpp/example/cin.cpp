#include <iostream>
#include <string>

using namespace std;

int main()
{
	int tuoi;

	cout << "Nhap so tuoi cua ban" << endl;
	cin >> tuoi;
	cout << "Ban sinh nam: " << 2025 - tuoi << endl;

	cout << "Nhap ngay thang nam sinh cua ban" << endl;
	int date, month, year;
	cin >> date >> month >> year;
	cout << "Ban sinh vao " << date << "/" << month << "/" << year << endl;

	cout << "Ban ten gi?" << endl;
	string ten;
	cin.ignore(1);
	getline(cin, ten);
	cout << "Xin chao " << ten << endl;

	return 0;
}
