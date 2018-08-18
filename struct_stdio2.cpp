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
student s,n;
cout<<"Enter First student Name : ";
gets(s.name);
cout<<"Enter ID : ";
cin>>s.id;
cout<<"Enter Major :";
gets(s.major);
cout<<"\n\nFirst student data:\n"<<endl;
cout<<"Name : "<<s.name<<endl;
cout<<"ID : "<<s.id<<endl;
cout<<"Major : "<<s.major <<endl<<endl;

cout<<"Enter Second student Name : ";
gets(n.name);
cout<<"Enter ID : ";
cin>>n.id;
cout<<"Enter Major :";
gets(n.major);
cout<<"\n\nSecond student data:\n"<<endl;
cout<<"Name : "<<n.name<<endl;
cout<<"ID : "<<n.id<<endl;
cout<<"Major : "<<n.major <<endl;

getch();
}
