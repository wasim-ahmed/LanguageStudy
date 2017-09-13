#include <iostream>
using namespace std;

class one
{
	public:
	one()
	{
		cout<<__FUNCTION__<<endl;
	}
	~one()
	{
		cout<<__FUNCTION__<<endl;
	}
};
class two : public one
{
	public:
	
	two()
	{
		cout<<__FUNCTION__<<endl;
	}
	~two()
	{
		cout<<__FUNCTION__<<endl;
	}
};
class three: public two
{
	private:
	
	//one obj;
	
	public:
	three()
	{
		cout<<__FUNCTION__<<endl;
	}
	~three()
	{
		cout<<__FUNCTION__<<endl;
	}
};

int main()
{
	three obj;
}