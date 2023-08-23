#include<iostream>
using namespace std;

class RBI
{
	public:
		double a;
		setData(double a)
		{
			this-> a =a;
		}
};

class SBI : public RBI
{
	public:
		float b,i;
		getROI()
		{
			cout << endl << "Enter interest rate of SBI : ";
			cin >> b;
			
			i = ((a*b) / 100) + a;
			
			cout << "Total amount of SBI : " << i << endl;
		}
};

class BOB : public RBI
{
	public:
		float c,j;
		getROI()
		{
			cout << endl << "Enter interest rate of BOB : ";
			cin >> c;
			
			j = ((a*c) / 100) + a;
			
			cout << "Total amount of BOB : " << j << endl;
		}
		
};

class ICICI : public RBI
{
	public:
		float d,h;
		getROI()
		{
			cout << endl << "Enter interest rate of BOB : ";
			cin >> d;
			
			h = ((a*d) / 100) + a;
			
			cout << "Total amount of ICICI : " << h << endl;
		}
		
};

int main()
{
	double i;
	
	cout << "Enter Amount : ";
	cin >> i;
	
	SBI x;
	BOB y;
	ICICI z;
	
	x.setData(i);
	x.getROI();
	
	y.setData(i);
	y.getROI();
	
	z.setData(i);
	z.getROI();
	
	return 0;
	
}
