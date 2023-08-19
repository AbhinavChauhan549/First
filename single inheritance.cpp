#include<iostream>
using namespace std ;
class A{
	public:
		int a;
		void input (){
			cout<<"Enter the value of a: "<<endl;
			cin>>a;
		}
};
class B : public A{
	public:
		int b;
	void calculate(){
		b=2*a;
		cout<<"Number:"<<b;
	}
	};
	int main(){
	B bb;
	bb.input();
	bb.calculate();
	return 0;	
}
