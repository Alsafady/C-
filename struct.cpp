#include<iostream.h>
#include<conio.h>

struct student {
char name[80];
int id;
char major[80];
};


void main(){
clrscr();

student s;

cout<<"Enter Name : ";
cin>>s.name;

cout<<"Enter ID : ";
cin>>s.id;

cout<<"Enter Major :";
cin>>s.major;

cout<<"\n\nNew student data:"<<endl;
cout<<"Name : "<<s.name<<endl;
cout<<"ID : "<<s.id<<endl;
cout<<"Major : "<<s.major<<endl;

getch();

}
