#include<iostream>
using namespace std;

template<typename T>
class Node{
public:
    T data;
    Node<T> *next;
};

template<typename T>
class LinkedList{
private:
    Node<T> *head;
public:
    LinkedList();
    void Insert(T x);
    int Insert(T x, int p);
    int Delete(int p);
    void Display();
};

template<typename T>
LinkedList<T>::LinkedList(){
    head = NULL;
}

template< typename T>
void LinkedList<T>::Insert(T x){
    Node<T> *temp = new Node<T>;
    temp->data = x;
    temp->next = NULL;
    Node<T> *temp1 = head;
    if(head != NULL){
    while(temp1->next != NULL){
        temp1 = temp1->next;
    }
    temp1->next = temp;
    }
    else{
        head = temp;
    }   
}

template< typename T>
int LinkedList<T>::Insert(T x, int p){
    Node<T> *temp = new Node<T>;
    temp->data = x;
    if(p == 1){
        temp->next = head;
        head = temp;
        return 0;
    }
    Node<T> *temp1 = head;
    for(int i = 3; i <= p; i++){
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp1->next = temp;
    return 0;
}

template <typename T>
int LinkedList<T>::Delete(int p){
        Node<T> *temp = head;
    if(p == 1){
        head = temp->next;
        delete temp;
        return 0;
    }
    for(int i = 3; i <=p; i++){
        temp = temp->next;
    }
    Node<T> *temp1 = temp->next;
    temp->next = temp1->next;
    delete temp1;
    return 0;
}

template<typename T>
void LinkedList<T>::Display(){
    Node<T> *temp = head;
    while(temp->next != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<temp->data<<"->END"<<endl;
}

int main()
{
    cout<<"  LINKED LIST\n";
    cout<<"----------------\n"
        <<"Datatypes\n"
        <<"----------------\n"
        <<"1.Integer\n"
        <<"2.Floating Point\n"
        <<"3.Exit\n\n"
        <<"Enter the option: ";
    int option;
    cin>>option;
    if(option == 3){
        cout<<"Exit Successfully\n";
        exit(0);
    }
    cout<<endl;
    cout<<"CREATION"<<endl;
    if(option == 1){
        LinkedList<int>l;
        cout<<"Enter the number (press 999 for the end): ";
        int x;
        cin>>x;
        while(x != 999){
            cout<<"Enter the number (press 999 for the end): ";
            l.Insert(x);
            cin>>x;
        }
        int op = 4;
        while(op < 5 && op > 0){
            cout<<"LINKED LIST MENU\n"
            <<"------------------\n"
            <<"1. INSERTION\n"
            <<"2. DELETION\n"
            <<"3. DISPLAY\n"
            <<"4. EXIT\n\n";
            cin>>op;
            switch(op){
                case 1:
                    int p;
                    cout<<"Enter the position at which to inserted: ";
                    cin>>p;
                    cout<<"Enter the number to be inserted: ";
                    cin>>x;
                    l.Insert(x, p);break;
                case 2:
                    cout<<"Enter the position: ";
                    cin>>p;
                    l.Delete(p);break;
                case 3:
                    l.Display();break;
                case 4:
                    cout<<"Exit Successfully\n";
                    exit(0);break;
                default:
                    exit(0);break;
            }
        }
    }
    if(option == 2){
        LinkedList<float>l;
        cout<<"Enter the number (press 999 for the end): ";
        float x;
        cin>>x;
        while(x != 999){
            cout<<"Enter the number (press 999 for the end): ";
            l.Insert(x);
            cin>>x;
        }
        int op = 4;
        while(op < 5 && op > 0){
            cout<<"LINKED LIST MENU\n"
            <<"------------------\n"
            <<"1. INSERTION\n"
            <<"2. DELETION\n"
            <<"3. DISPLAY\n"
            <<"4. EXIT\n\n";
            cin>>op;
            switch(op){
                case 1:
                    int p;
                    cout<<"Enter the position at which to inserted: ";
                    cin>>p;
                    cout<<"Enter the number to be inserted: ";
                    cin>>x;
                    l.Insert(x, p);break;
                case 2:
                    cout<<"Enter the position: ";
                    cin>>p;
                    l.Delete(p);break;
                case 3:
                    l.Display();break;
                case 4:
                    cout<<"Exit Successfully\n";
                    exit(0);break;
                default:
                    exit(0);break;
            }
        }   
    }

    return 0;
}