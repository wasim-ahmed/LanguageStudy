#include <iostream>
using namespace std;



class item{
	private:
	
	int data;
	
	public:
	
	void set_Data(int value)
	{
		data = value;
	}
	
	friend int function(item&);
	
	protected:
	
};

int function(item &Obj)//A global Friend function, all we need to do is to declare in our header file
{
	return Obj.data;;
}

int main()
{
	item Obj;
	Obj.set_Data(23);
	cout<<function(Obj)<<endl;
	
	return 1;
}