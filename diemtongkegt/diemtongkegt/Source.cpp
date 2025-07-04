#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double diemTongKet;
	int lt;
	cin >> lt;
	double a[10];
	// input 
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}

	double gk1, gk2;
	cin >> gk1 >> gk2;
	double ck, st;
	cin >> ck >> st;
	int count = 0;

	// bai thuc hanh diem khac 0
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > 0) 
			count++;
	}


	double cc = lt + count;
	double GK = (gk1 + gk2) / 2.0;
	

	for (int i = 0; i < 10 - 1; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (a[i] < a[j]) swap(a[i], a[j]);
		}
	}


	double TH1;
	
	TH1 =(double) (a[0] + a[1] + a[2] + a[3] + a[4]) / 5.0;
	
	



	cout << a[1] << endl;
	return 0;
}