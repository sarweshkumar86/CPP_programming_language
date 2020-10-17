//program of inline function

#include<iostream.h>
#include<conio.h>

class student
{
public: //access specifier
char name[20];  //data member
char age[20];  //data member
char city[20]; //data member
public:
void get()   //function member
{
cout<<"Please enter user name ,age and address \n" ;
cin>>name>>age>>city;
}
void display()    //function member
{
cout<<" \n student name is " <<name;
cout<<" \n studnt age is" <<age;
cout<<" \n  studnt city is  " <<city;
}
};



void main()
{
clrscr();
student stu;  //object creation
stu.get();   //call get function
stu.display();  //call display function
getch();
}