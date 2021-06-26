
#include <iostream>
#include <math.h>
using namespace std;


class Numbers
{
public:
	double m_basis;
	double m_exponent;
	

	void set(double basis, double exponent)
	{
		m_basis = basis;
		m_exponent = exponent;
	}
	

	void print()
	{
		cout << "BASIS" << endl << m_basis << endl << "EXPONENT" <<endl << m_exponent << endl;
		cout << "Resalt" << endl << pow(m_basis,m_exponent) << endl;
	}
};

int main()
{
	Numbers n1;
	n1.set(3.2,5.3);
	
	n1.print();
	

	return 0;
}