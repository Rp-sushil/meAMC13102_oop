#include<iostream>
#include<memory.h>
using namespace std;

void* operator new (size_t s)
{
    void *p=malloc(s);
    return(p);
}

void operator delete(void *p)
{
    free(p);
}


int main()
{
    
    cout<<"Enter the Roll no        =   ";
    string rollno;
    cin>>rollno;
    cout<<"Enter the Name           = ";
    string *name=new string;
    cin>>*name;
    cout<<"Enter the marks one by one : \n";
    int *arr=new int[5];
    for(size_t i=0; i < 5; i++)
    {
        cin>>arr[i] ;
    }
    int total_marks = 0;
    for(int i=0; i < 5; i++)
    {
        total_marks += arr[i];
    }
    cout<<"STUDENT MARK LIST \n";
    cout<<"------------------------------ \n";
    cout<<"ROLL NO. : "<<"   "<<rollno<<endl;
    cout<<"NAME  :"<<"   "<<*name<<endl;
    cout<<"TOTAL MARKS  : "<<"   "<<total_marks;
    delete(name);
    delete(arr);
    
    return 0;

}
