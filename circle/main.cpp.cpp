#include<iostream>
#include"area.h"
using namespace std;
int main()
{
	Calculation calculation;
	double R;
	cin >> R;
	cout<<"the area of the circle is " << calculation.Calculate(R) << endl;
	return 0;
}