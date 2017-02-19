#include<iostream>

using namespace std;

class box
{
	public:
		double length;
		double breadth;
		double height;
}

main()
{
	box box1;
	box Box2;
	double vol=0.0;
	box1.height=5.0;
	box1.length=6.0;
	box1.breadth=7.0;
	box2.height=10.0;
	box2.length=12.0;
	box2.breadth=13.0;
	vol=box1.height*box1.length*box1.breadth;
	cout<<"Box1's volume:"<<vol<<endl;
	vol=box2.height*box2.length*box2.breadth;
	cout<<"Box2's volume:"<<vol<<endl;
}