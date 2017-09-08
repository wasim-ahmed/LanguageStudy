//#Friend function of another class type 1 of 3

#include <iostream>
using namespace std;
//use of these arguments for understanding friend function
//when two clases are unrelated and one class wants to access the data fo the another class, then the class
// whose data has to be used says "you give me one of your function that i will make as friend and provide you the data".
//or
//if base class has to take some data from a child class then(altough this is not a good practise because 
//this is not the philopshy behind inheritance, inheritance provides code reusability which generally goes from bottom to top
//i.e. sub class utilize the feature of base class ) you can ask sub class to make your function as friend

class Student;

class Faculty
{
	private:

	int phoneNo;
	
	public:
	
	void getStudentPhNo(const Student &Obj);
	

	protected:
	
};

class Student
{
	private:
	
	int phoneNo;
	
	public:
	
	friend void Faculty::getStudentPhNo(const Student &Obj);
	
	void setPhNo(int Phno)
	{
		phoneNo = Phno;
	}
};

void Faculty::getStudentPhNo(const Student &Obj)
{
	cout<<Obj.phoneNo<<endl;
}
int main()
{
	Faculty FObj;
	Student SObj;
	SObj.setPhNo(987654321);
	
	FObj.getStudentPhNo(SObj);
	
}