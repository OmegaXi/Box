#include<iostream>
#include<stdlib.h>

using namespace std;

class box
{
	public:
		double length;
		double breadth;
		double height;
};

void getvol()
{
	box box1;
	double vol=0.0;
	cout<<"Input the height:";
	cin>>box1.height;
	cout<<"Input the length:";
	cin>>box1.length;
	cout<<"Input the breadth:";
	cin>>box1.breadth;
	vol=box1.height*box1.length*box1.breadth;
	cout<<"Box1's volume:"<<vol<<endl;
}

void menu()
{
    cout<<"****************************************************"<<endl;
    cout<<"0:end the programme."<<endl;
    cout<<"1:continue."<<endl;
    cout<<"****************************************************"<<endl;
}

main()
{
    menu();
    while(1)
    {
        int num=-1;
        cout<<"Choose:";
        cin>>num;
        if(num==0)
            exit(1);
        else if(num==1)
            getvol();
    }
}
