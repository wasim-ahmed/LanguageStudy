#include <iostream>
using namespace std;
//summary only public variables and functions are accessible outside class, rest all scopes have to be used from inside public scope 
class A
{
	private:
		int private_var ;
		void private_fun_A()
		{
			cout<<"in private of A"<<endl;
			testPublic();
			testProtected();
		}
		void testPrivate()
		{
			cout<<__FUNCTION__<<endl;
		}
	protected:
		int protected_var ;
		void protected_fun_A()
		{
			private_fun_A();
			private_var = 30;
			cout<<"private variable inside protected function of class"<<private_var<<endl;
			cout<<"in protected of A"<<endl;
			
			testPublic();
			testPrivate();
		}

		void testProtected()
		{
			cout<<__FUNCTION__<<endl;
		}
	public:
		int public_var ;
		void public_fun_A()
		{
			protected_fun_A();
			protected_var = 20;
			cout<<"protected variable inside public function of class"<<protected_var<<endl;
			cout<<"in public of A"<<endl;
		}	
		
		void testPublic()
		{
			cout<<__FUNCTION__<<endl;
		}
};
int main()
{
	A A_obj;//creating Object
	
	//accessing public section
	A_obj.public_var=10;
	A_obj.public_fun_A();
	cout<<A_obj.public_var<<endl;
	
	//accessing protected section //ERROR
/*	A_obj.protected_var=20;
	A_obj.protected_fun_A();
	cout<<A_obj.protected_var<<endl;
*/	
	//accessing private section //ERROR
/*	A_obj.private_var=20;
	A_obj.private_fun_A();
	cout<<A_obj.private_var<<endl;
*/	
}
