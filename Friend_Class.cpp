#include <iostream>
using namespace std;

class Transportation
{
	private:
	
	int rates;
	
	public:
	
	friend class Employee;
	
	void setRates(int);

};

class Employee
{
	private:
	
	public:
	
	int getRates(Transportation&);
	
};

void Transportation::setRates(int value)
{
	rates = value;
}

int Employee::getRates(Transportation& Obj)
{
	return Obj.rates;
}

int main()
{
	Transportation Obj;
		Obj.setRates(45);
		
	Employee ref;
	cout<<ref.getRates(Obj)<<endl;
	
}