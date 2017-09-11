#include <iostream>
using namespace std;

class A
{
	private:
		int private_var_A ;
		void private_fun_A()
		{
			cout<<__FUNCTION__<<endl;
		}
	protected:
		int protected_var_A ;
		void protected_fun_A()
		{
			cout<<__FUNCTION__<<endl;
		}		
	public:
		int public_var_A ;
		void public_fun_A()
		{
			cout<<__FUNCTION__<<endl;
		}
};

class B : public A
{
	private:
		int private_var_B ;
		void private_fun_B()
		{
			cout<<__FUNCTION__<<endl;
		}
	protected:
		int protected_var_B ;
		void protected_fun_B()
		{
			cout<<__FUNCTION__<<endl;
		}		
	public:
		int public_var_B ;
		void public_fun_B()
		{
			public_fun_A();
		}
};

class C : public B
{
	private:
		int private_var_C ;
		void private_fun_C()
		{
			cout<<__FUNCTION__<<endl;
			public_fun_A();
			protected_fun_A();
			//private_fun_A();// private will not be accessible here
		}
	protected:
		int protected_var_C ;
		void protected_fun_C()
		{
			cout<<__FUNCTION__<<endl;
			public_fun_A();
			protected_fun_A();
			//private_fun_A();// private will not be accessible here
		}		
	public:
		int public_var_C;
		void public_fun_C()
		{
			public_fun_A();
			protected_fun_A();
			//private_fun_A();// private will not be accessible here
		}
};
int main()
{
	C c_Obj;
	c_Obj.public_fun_C();
	c_Obj.public_var_A = 10;
}
