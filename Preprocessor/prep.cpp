#include <iostream>
#define INTEGER
#include "array.h"
#define PI 3.14159 // Пример константы
#define SQRT(a) (a)*(a) // Макрос квадрата выражения
#define forever for(;;)
using namespace std;

#ifdef PI
float square(int r) {
return PI * SQRT(r);
}

#else
#error <PI is not defined>
float square(int r) {
	return 0;
}
#endif

int main() {
	int r1{ 5 }, r2{3};

	float sq = PI * SQRT(r1 - r2);//(r1-r2)*(r1-r2)
	cout << "Square is " << square(r1)<<endl;
#undef PI
	//.....
#if PI
	float sq = PI * SQRT(r1 - r2);
	cout << "Square is " << sq << endl;
#endif
#if PI
#error PI is not defined
	//cout << "PI is not defined" << endl;
#endif
/*	int i = 0;
forever{
	cout << i++ << endl;
	if (i > 200) break;
	}*/

#define ARR_SIZE 5
	int arrInt[ARR_SIZE] = { 2,5,8,2,5 };
	char arrchar[100] = { "Some String" };

	showArrT(arrInt, ARR_SIZE);
	cout << "Maximum is: " << getMaxT(arrInt, ARR_SIZE);



	return 0;
}