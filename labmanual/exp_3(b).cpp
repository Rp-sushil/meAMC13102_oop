#include<bits/stdc++.h>
using namespace std;

class employ
{
public:

    static int mcount;
    static int ecount;

    int id;
    string name;
    string degination;

    
    void emp (int a, string b, string c )
    {
        id = a;
        name = b;
        degination = c;

        if (c == "Manager")
            mcount++;
        else
            ecount++;
    }
};
int employ::mcount = 0;
int employ::ecount = 0;

int main()
{
    cout<<"Enter the number of employees: ";
    int total_number = 0;
    cin>>total_number;
    employ em[total_number];

    for(int i=0; i<total_number; i++)
    {
        cout<<"Enter the employ id: ";
        int a;
        cin>>a;
        cout<<"Enter the name: ";
        string b;
        cin>>b;
        cout<<"Enter the designation: ";
        string c;
        cin>>c;
        em[i].emp(a,b,c);
    }
    cout<<"MENU: \n";
    cout<<"=================================\n";
    cout<<"1.Manager's list\n";
    cout<<"2.Engineer's list\n";
    cout<<"3.Total number of employees\n\n\n";
    int option;
    cout<<"Enter option: ";
    cin>>option;
    cout<<endl;
    if (option == 3)
        cout<<"exit";

        for(int i=0; i < total_number; i++)
            {
                if(em[i].degination == "Manager" && option == 1){
                   cout<<"EMPLOY ID: "<<em[i].id<<endl;
                   cout<<"EMPLOY NAME: "<<em[i].name<<endl;
                }
                if(em[i].degination == "Engineer" && option == 2){
                   cout<<"EMPLOY ID: "<<em[i].id;
                   cout<<"EMPLOY NAME: "<<em[i].name;
                }

            }
    if (option == 1)
        cout<<"Total number of Manager :"<< employ::mcount<<endl;
    else
        cout<<"Total number of Engineer :"<< employ::ecount<<endl;


}


