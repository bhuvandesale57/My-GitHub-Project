#include<iostream>
using namespace std;

class complex
{
	public:
		int real;
		int img;
		complex(int r=0,int i=0)
		{
			real=r;
			img=i;
		}
		
		friend complex operator+(complex &c1,complex &c2);
		friend complex operator-(complex &c1,complex &c2);
		friend complex operator*(complex &c1,complex &c2);
		friend ostream & operator<<(ostream &out,complex &c1);
		
		~complex(){}
		
};

int main()
{
	complex c1(10,10);
	complex c2(5,5);
	complex c3;
	complex c4;
	complex c5;
	
	c3=c1+c2;
	c4=c1-c2;
	c5=c1*c2;
	
	cout<<c3<<endl<<c4<<endl<<c5<<endl;
	return 0;
}

complex operator+(complex &c1,complex &c2)
{
	complex c;
	c.real=c1.real+c2.real;
	c.img=c1.img+c2.img;
	
	return c;
}

complex operator-(complex &c1,complex &c2)
{
	complex c;
	c.real=c1.real-c2.real;
	c.img=c1.img-c2.img;
	
	return c;
}

complex operator*(complex &c1,complex &c2)
{
	complex c;
	c.real=c1.real*c2.real-c1.img*c2.img;
	c.img=c1.real*c2.img+c2.real*c1.img;
	
	return c;
}

ostream & operator<<(ostream &out,complex &c1)
{
	out<<c1.real<<"+i"<<c1.img;
	
	return out;
}
