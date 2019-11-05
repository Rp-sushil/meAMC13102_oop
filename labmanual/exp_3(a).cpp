#include<iostream>
using namespace std;

    class income_tax
    {
        private:
        float tax = 0.5;
        string name;
        int salary;
        public:
        bool  functioncall()
        {
            int option = -1;
            cout<<"Enter the option = ";
            cin>>option;
            cout<<"Enter the name :";
            cin>>name;
            cout<<"Enter the salary amount : Rs. ";
            cin>>salary;
            if (option==1)
                return true;

            return false;
        }
        float calincometax_1()
        {
            cout<<"NAME     :"<<name<<endl;;
            cout<<"SALARY   :"<<salary<<endl;
            cout<<"INCOME TAX : RS. "<<(float)(tax*salary)<<endl;

        }
        float calincometax_2()
        {
            cout<<"Enter the tax percentage :";
            cin>>tax;
            cout<<"NAME     :"<<name<<endl;;
            cout<<"SALARY   :"<<salary<<endl;
            cout<<"INCOME TAX : RS. "<<(float)(tax*salary)<<endl;

        }

    };

int main()
{
    income_tax person;
    cout<<"MENU"<<endl<<"------------"<<endl;
    cout<<"1 Default tax percentage calculation\n2 Getting tax percentage from the user\n3 Exit"<<endl<<endl<<endl;

    bool option = person.functioncall();
  if(option )
  {
      person.calincometax_1();
  }

   else{
    person.calincometax_2();
   }

   return 0;
}
