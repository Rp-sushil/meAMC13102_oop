#include<iostream>

using namespace std;

class iNum{
private:
	double r,i;
public:
	iNum(){r = 0; i = 0;}
	double getR() const {return (r);}
	double getI() const {return (i);}
	void setNum(double x = 0.0,double y = 0.0) {r = x;i = y;}
	friend iNum operator- (const iNum& fn,const iNum& sn);
	friend iNum operator+ (const iNum& fn,const iNum& sn);
};





iNum operator- (const iNum& fn,const iNum& sn){
		iNum rslt;
		rslt.r = fn.r - sn.r;
		rslt.i = fn.i - sn.i;
		return rslt;	
}
iNum operator+ (const iNum& fn,const iNum& sn){
		iNum rslt;
		rslt.r = fn.r + sn.r;
		rslt.i = fn.i + sn.i;
		return rslt;
}



int CtoI(const iNum& num){
	return int(num.getR());
}
iNum ItoC(int n){
	iNum num;
	num.setNum(double(n),double(0));
	return num; 
}
double CtoD(const iNum& num){
	return num.getR();
}
iNum DtoC(double n){
	iNum num;
	num.setNum(n,double(0));
	return num;
}

int main()
{
	cout<<"1 Addition\n";
	cout<<"2 Substraction\n";
	cout<<"3 Integer to Complex\n";
	cout<<"4 Complex to Integer\n";
	cout<<"5 Double to Complex\n";
	cout<<"6 Complex to Double\n";
	cout<<"7 Exit\n";
	cout<<"Enter Option: ";
	char option;
	cin>>option;
	if(option == '1' || option == '2'){
		int r,i;
		cout<<"Enter real and imagianry part: ";
		iNum fn;
		cin>>r;
		cin.ignore(2);
		cin>>i;
		fn.setNum(r,i);
		cout<<"Enter real and imagianry part: ";
		iNum sn;
		cin>>r;
		cin.ignore(2);
		cin>>i;
		sn.setNum(r,i);
		//lets add them
		iNum rslt;
		if(option == '1'){
			rslt = (fn) + (sn);
			cout<<"SUM: ";
		}
		else if(option == '2'){
			rslt = (fn) - (sn);
			cout<<"Diferrence: ";
		}
		cout<<rslt.getR()<<" + i"<<rslt.getI();
	}
	else if(option == '4' ||  option == '6'){
		iNum num;
		cout<<"Enter real and imaginary part: ";
		double r,l;
		cin>>r;
		cin.ignore(2);
		cin>>l;
		num.setNum(r,l);
		if(option == '4'){
			cout<<"The in Integer form: "<<CtoI(num);
		}	
		else{
			cout<<"The in Double form: "<<CtoD(num);
		}
	}
	else if(option == '3' || option == '5'){
		iNum num;
		cout<<"Enter the number to converted: ";
		if(option == '3'){
			int n;
			cin>>n;
			num = ItoC(n);
		}
		else{
			double n;
			cin>>n;
			num = DtoC(n);
		}
		cout<<"The number in complex form: "<<num.getR()<<" + i"<<num.getI();
	}
	else{
		cout<<"Retry Program terminated\n";
	}
	
	return 0;
}
