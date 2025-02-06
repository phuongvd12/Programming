#include <iostream>

using namespace std;

class LopHocLapTrinh{
	public:
		void LopHocLapTrinhCPlusPlus(void){
			cout << "Welcome to C++ class" << endl;
		}
};


class LopHocNgheThuat{
	public:
		void LopHocMua(void)
		{
			cout << "Welcome to Dance class" << endl;
		}
};

int main()
{
	LopHocLapTrinh 	LopHoc1;
	LopHocNgheThuat LopHoc2;
	
	LopHoc1.LopHocLapTrinhCPlusPlus();
	LopHoc2.LopHocMua();

	return 0;
}
