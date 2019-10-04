#include<iostream>
using namespace std;

class two;

class one{
	private:
		int Num1;
	public:
		one(){
			Num1 = 0;
		}
	friend void add(const one&, const two&);
};
class two
{
private:
	int Num2;
public:
	two(){
		Num2 = 2;
	}
	friend void add(const one&, const two&);
};


void add(const one& fN, const two& sN){

		printf("Sum of %d and %d is %d \n",fN.Num1,sN.Num2,fN.Num1+sN.Num2);
}



int main(int argc, char const *argv[])
{
	class one fN;
	class two sN;
	add(fN,sN);
	return 0;
}