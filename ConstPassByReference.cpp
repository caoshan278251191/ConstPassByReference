#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class test{
	public:
		void Dog(){ cout<<"I am a dog"<<endl;}
                   virtual string getName()
                {	
                        return Name;
                }
                   
	private:
		string Name="Max";
                
};


class test1: public test
{
	public:
		string getName()
                {	
                    return 0;
                }
};

class test2: public test
{
public:
	test2();
	~test2();
};

test2::test2()
{
	cout<<"this is my name :"<<this->getName()<<endl;
}


test2::~test2() {

}

int main()
{
	test testObj;
	testObj.getName();
	test *testObj1=new test1;
	test *testObj2=new test2;
	testObj1->getName();
	testObj2->getName();

	return 0;
}
