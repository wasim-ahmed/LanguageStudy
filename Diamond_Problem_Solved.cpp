#include <iostream>
using namespace std;

class base
{
	private:

	public:
	
		virtual void fun() = 0;

	protected:
};

class derived1 : virtual public base
{
	private:

	public:

		void fun()
		{
			cout<<"derived1::"<<__FUNCTION__<<endl;
		}	
	
	protected:
};

class derived2 : virtual public base
{
	private:

	public:
		void fun()
		{
			cout<<"derived2::"<<__FUNCTION__<<endl;
		}

	protected:
};

class regular : public derived1, public derived2
{
	private:

	public:

		void fun()
		{
			cout<<"regular ::"<<__FUNCTION__<<endl;
		}
	

	protected:
};

int main()
{
	base *ptr = new derived1();
	ptr->fun();

	base *ptr1 = new regular();//can not upcast , which sub object?
	ptr1->fun();
	return 1;
}

------------------------------------------------------------------------------------------------
	
OUTPUT:
derived1::fun
regular ::fun
