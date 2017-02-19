#include<iostream>

using namespace std;

class box
{
	public:
		double length;
		double breadth;
		double height;
};

main()
{
	box box1;
	double vol=0.0;
	cout<<"Input the height:"<<endl;
	cin>>box1.height;
	cout<<"Input the length:"<<endl;
	cin>>box1.length;
	cout<<"Input the breadth:"<<endl;
	cin>>box1.breadth;
	vol=box1.height*box1.length*box1.breadth;
	cout<<"Box1's volume:"<<vol<<endl;
}
