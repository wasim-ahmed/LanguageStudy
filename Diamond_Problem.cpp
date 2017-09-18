#include <iostream>
using namespace std;

class base
{
	private:

	public:
	
		virtual void fun();

	protected:
};

class derived1 : public base
{
	private:

	public:

		void fun()
		{
			cout<<"derived1::"<<__FUNCTION__<<endl;
		}	
	
	protected:
};

class derived2 : public base
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
------------------------------------------------------------------------------------------------------------------
Output:
Diamond_Problem.cpp: In function ‘int main()’:
Diamond_Problem.cpp:62:27: error: ‘base’ is an ambiguous base of ‘regular’
  base *ptr1 = new regular();//can not upcast , which sub object?
