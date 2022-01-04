#include<iostream>
#include<string.h>
#include<string>
using namespace std;
//CLASSES
//Staff class
class Staff{
 protected:
 string Staff_ID;
 string Name;
 string Email;
 string Contact_num;
 public:
 Staff();
 Staff(string StaffID);
 string getStaffID();
 void addMember(string StaffID, string name, string email, string Cnum);
 void displayDetails();
 void setDetails(string StaffID, string name, string email, string conNum);
 ~Staff();
};
//photographer
class Photographer : public Staff{
 protected:
 string Event_type;
 public:
 Photographer();
 Photographer(string Staff_ID) : Staff(Staff_ID){};
 void setDetails(string PStaff_ID, string PName, string PEmail, string 
PCon_num);
 void displayDetails();
 ~Photographer();
};
//editor class
class Editor : public Staff{
 public:
 Editor();
 Editor(string Staff_ID) : Staff(Staff_ID){};
 void setDetails(string EStaff_ID, string EName, string EEmail, string 
ECon_num);
 void displayDetails();
 ~Editor();
};
//event class
class Event
{
 private:
 string Event_ID;
 string Name;
 string Date;
 string Time;
 string Venue;
 public:
 Event();
 void setEventDetails(string EID, string Ename, string Edate, string Etime, 
string Evenue);
 string getEventDetails();
 ~Event();
};
//member class
class Member{
 private:
 string Member_ID;
 string Name;
 string Email;
 string Contact_num;
 public:
 Member();
 void setMemberDetails(string MID, string Mname, string Memail, string 
McNum);
 void displayMemberDetails(); 
 ~Member(); 
};
//payment class
class Payment
{
 private:
 string payment_ID;
 string member_ID;
 string date;
 string type;
 string card_num;
 double amount;
 public:
 Payment();
 void setPayment(string PayID, string MID, string Payd, string ty, string 
PaycNum, double amnt);
 void displayDetails();
 ~Payment();
};
//Service agent class
class ServiceAgent : public Staff{
 public:
 ServiceAgent();
 ServiceAgent(string Staff_ID) : Staff(Staff_ID){};
 void setDetails(string AStaff_ID, string AName, string AEmail, string 
ACon_num);
 void displayDetails();
 ~ServiceAgent();
};
//feedback class
class Feedback{
 private:
 int num;
 char type[100];
 char Member_ID[100];
 public:
 Feedback();
 Feedback(int no,char tpy[],char id[]);
 ~Feedback();
 void setDetails();
 int getDetails();
};
//package class
class Package{
 
 private:
 int code;
 char Name[];
 public:
 Package();
 Package(int c_id,char P_name[]);
 ~Package();
 void setDetails();
 int getDetails();
 
};
//Cpp files
//Staff.cpp
Staff::Staff()
{
}
Staff::Staff(string Staff_ID){
 this->Staff_ID = Staff_ID;
 this->Name = "Not set";
 this->Email = "Not set";
 this->Contact_num = "Not set";
}
Staff::~Staff(){
 cout << "DELETED STAFF MEMBER!"<<Staff_ID<< endl;
}
void Staff::addMember(string StaffID, string name, string email, string Cnum){
 this->Staff_ID = StaffID;
 this->Name = name;
 this->Email = email;
 this->Contact_num = Cnum;
cout << "NEW STAFF MEMBER: " << Staff_ID << " ADDED SUCCESSFULLY!!" << endl;
}
string Staff::getStaffID(){
 return Staff_ID;
}
void Staff::displayDetails(){
 cout << "STAFF ID : " << Staff_ID << endl;
 cout << "NAME : " << Name << endl;
 cout << "EMAIL : " << Email << endl;
 cout << "CONTACT NUMBER : " << Contact_num << endl<<endl;
}
void Staff::setDetails(string StaffID, string name, string email, string 
conNum){
 this->Staff_ID = StaffID;
 this->Name = name;
 this->Email = email;
 this->Contact_num = conNum;
}
//Editor cpp
Editor::Editor()
{}
void Editor::setDetails(string EStaff_ID, string EName, string EEmail, string 
ECon_num){
 this->Staff_ID = EStaff_ID;
 this->Name = EName;
 this->Email = EEmail;
 this->Contact_num = ECon_num;
}
void Editor::displayDetails(){
 cout << "STAFF ID : " << Staff_ID << endl;
 cout << "NAME : " << Name << endl;
 cout << "E-MAIL : " << Email << endl;
 cout << "CONTACT NO : " << Contact_num << endl<<endl<<endl;
}
Editor::~Editor(){
 cout<<"EDITOR DESTRUCTOR IS RUNNING!"<<endl;
}
//event cpp
Event::Event(){
}
void Event::setEventDetails(string EID, string Ename, string Edate, string 
Etime, string Evenue){
 Event_ID = EID;
 Name = Ename;
 Date = Edate;
 Time = Etime; 
 Venue = Evenue;
}
string Event::getEventDetails(){
 return Event_ID;
}
Event::~Event()
{
 cout<<"EVENT DESTRUCTOR IS RUNNING!"<<endl;
}
//member.cpp
Member::Member(){
}
void Member::setMemberDetails(string MID, string Mname, string Memail, string 
McNum){
 Member_ID = MID;
 Name = Mname;
 Email = Memail;
 Contact_num = McNum; 
}
void Member::displayMemberDetails(){
 cout<<"MEMBER ID: "<< Member_ID<<endl;
 cout<<"NAME: "<<Name<<endl;
 cout<<"EMAIL: "<<Email<<endl;
 cout<<"CONTACT NO: "<<Contact_num<<endl<<endl;
}
Member::~Member()
{
 cout<<"MEMBER DESTRUCTOR IS RUNNING!"<<endl;
}
//payment cpp
Payment::Payment(){
}
void Payment::setPayment(string PayID, string MID, string Payd, string ty, 
string PaycNum, double amnt){
 payment_ID = PayID;
 member_ID = MID;
 date = Payd;
 type = ty;
 card_num = PaycNum;
 amount = amnt;
}
void Payment::displayDetails(){
 cout << "PAYMENT ID: " << payment_ID << endl;
 cout << "MEMBER ID: " << member_ID << endl;
 cout << "DATE: " << date << endl;
 cout << "TYPE: " << type << endl;
 cout << "CARD NUMBER: " << card_num << endl;
 cout << "AMOUNT: " << amount << endl<<endl;
}
Payment::~Payment()
{
 cout << "PAYMENT DESTRUCOR IS RUNNING!" << endl;
}
//ServiceAgent cpp
ServiceAgent::ServiceAgent(){}
void ServiceAgent::setDetails(string AStaff_ID, string AName, string AEmail, 
string ACon_num){
 this->Staff_ID = AStaff_ID;
 this->Name = AName;
 this->Email = AEmail;
 this->Contact_num = ACon_num;
}
void ServiceAgent::displayDetails(){
 cout << "STAFF ID : " << Staff_ID << endl;
 cout << "NAME : " << Name << endl;
 cout << "E-MAIL : " << Email << endl;
 cout << "CONTACT NUMBER : " << Contact_num << endl<<endl;
}
ServiceAgent::~ServiceAgent()
{
cout<<"SERVICE AGENT DESTRUCTOR IS RUNNING!"<<endl;
}
//photograper cpp
Photographer::Photographer()
{
}
Photographer:: ~Photographer(){
cout<<"PHOTOGRAPHER DESTRUCORT IS RUNNING!"<<endl;
}
void Photographer::setDetails(string PStaff_ID, string PName, string PEmail, 
string PCon_num){
 this->Staff_ID = PStaff_ID;
 this->Name = PName;
 this->Email = PEmail;
 this->Contact_num = PCon_num;
}
void Photographer::displayDetails(){
 cout << "STAFF ID : " << Staff_ID << endl;
 cout << "NAME : " << Name << endl;
 cout << "E-MAIL : " << Email << endl;
 cout << "CONTACT NO : " << Contact_num<<endl<<endl;
}
//feedback.cpp
Feedback::Feedback()
{
 num=0;
}
Feedback::Feedback(int no,char tpy[],char id[])
{
 num=no;
 strcpy(type,tpy);
 strcpy(Member_ID,id);
}
void Feedback::setDetails()
{ 
 cout<<"ENTER THE FEEDBACK ID: ";
 cin>>num;
 cout<<"ENTER THE TYPE OF FEEDBACK: ";
 cin>>type;
 cout<<"ENTER THE MEMBER ID: ";
 cin>>Member_ID;
}
int Feedback::getDetails()
{
 cout<<"FEEDBACK_ID: "<<num<<endl;
 cout<<"TYPE OF FEEDBACK "<<type<<endl;
 cout<<"MEMBER ID: "<<Member_ID<<endl<<endl;
 return 0;
}
Feedback::~Feedback()
{
 cout<<"FEEDBACK DESTRUCTOR IS RUNNING!"<<endl;
}
//package.cpp
Package::Package()
{
 code=0;
}
Package::Package(int c_id,char P_name[])
{
 code=c_id;
 strcpy(Name,P_name);
}
void Package::setDetails()
{
 cout<<"ENTER THE PACKAGE CODE: ";
 cin>>code;
 cout<<"ENTER THE PACKAGE NAME: ";
 cin>>Name;
}
int Package::getDetails()
{
 cout<<"PACKAGE CODE IS: "<< code<<endl;
 cout<<"PACKAGE NAME IS: "<< Name<<endl<<endl;
 return 0;
}
Package::~Package()
{
 cout<<"PACKAGE DESTRUTOR IS RUNNING!"<<endl;
}
//main function
int main()
{
 Staff *S1= new Staff();
 Feedback *F1=new Feedback();
 Package *P1 = new Package();
 Payment *PA1= new Payment();
 Member *M1=new Member();
 Event *E1=new Event();
ServiceAgent *SA1= new ServiceAgent();
Photographer *Ph1= new Photographer();
Editor *Ed1= new Editor();
 F1->setDetails();
 F1->getDetails();
 P1->setDetails();
 P1->getDetails();
 S1->setDetails("SID20637489","Navodya","navodya@gmail.com","0763656444");
 S1->displayDetails();
 PA1-
>setPayment("PID2062","ID20637489","2020/03/23","Cash","30763647775",500000.00
);
 PA1->displayDetails();
 M1-
>setMemberDetails("ID20456567","Kithmin","kithmin@gmail.com","0783456342");
 M1->displayMemberDetails();
 E1->setEventDetails("EID1212","Wedding","2022/12/22","00:34:00 
a.m","SLIIT");
 E1->getEventDetails();
 SA1->setDetails("SID20634569","Pasindu","pasindu@gmail.com","0752341112");
 SA1->displayDetails();
 Ph1->setDetails("PHID20634534","Sachin","sachin@gmail.com","0783647774");
 Ph1->displayDetails();
 Ed1->setDetails("EDID234512356","Thejana","thejana@gmail.com","0704344441");
 Ed1->displayDetails();
delete F1;
delete P1;
delete PA1;
delete M1;
delete E1;
delete SA1;
delete Ph1;
delete Ed1;