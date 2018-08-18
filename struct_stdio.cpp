#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct student {
char name[80];
long id;
char major[80];
};

void main(){
clrscr();

student s;
cout<<"Enter Name : ";
gets(s.name);

cout<<"Enter ID : ";
cin>>s.id;

cout<<"Enter Major :";
gets(s.major);

cout<<"\n\nNew student data:\n"<<endl;
cout<<"Name : "<<s.name<<endl;
cout<<"ID : "<<s.id<<endl;
cout<<"Major : "<<s.major <<endl;

getch();

}
