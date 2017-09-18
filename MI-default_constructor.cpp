#include <iostream>
using namespace std;

class base
{
	private:
	
		int x;
	public:

	base(int temp =0)
	{
		cout<<"base class parameterized constructor"<<endl;	
		x = temp;
	}
	base(int temp1,int temp2)
	{
		cout<<"one more parameterized constructor of base class "<<endl;	
	}
	
	virtual void fun() =0;

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

	base *ptr1 = new regular();
	ptr1->fun();

	return 1;
}

