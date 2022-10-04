#include<iostream>
using namespace std;
int main ()
{
int ch,ward,pid;
string hname,illness,pname,drname;
string dname,DR,did,dept;
string reg_no;
do{
cout<<"\n\tHOSPITAL MANAGEMENT SYSTEM\n";
cout<<"\tPlz choose Your choice\n \t1. Enter Hospital Data\n\t2.Enter Patient Data \n\t3.
Enter DR. Data \n \t4.exit";
cin>>ch;
switch(ch)
{
case 1:
cout<<"Enter hospital name "<<endl;
cin>>hname;
cout<<"Enter dr._ name "<<endl;
cin>>dname;
cout<<"Enter registration no"<<endl;
cin>>reg_no;
cout<<"----------------------------------------------------------------------------------"<<endl;
cout<<"Hospital Name =="<<hname<<endl;
cout<<"Doctor name=="<<dname<<endl;
cout<<"hospital registration no="<<reg_no<<endl;
cout<<"----------------------------------------------------------------------------------";
break;
case 2:
cout<<"Enter Patient name "<<endl;
cin>>pname;
cout<<"Enter Patient id "<<endl;
cin>>pid;
cout<<"Enter Patient illness "<<endl;
cin>>illness;
cout<<"Enter dr assigned ";
cin>>drname;
cout<<"----------------------------------------------------------------------------------"<<endl;
cout<<"Patient name=== "<<pname<<endl;
cout<<"Patient id == "<<pid<<endl;
cout<<"Patient illness=="<<illness<<endl;

cout<<"Patient assigned Doctor==="<<drname;
cout<<"----------------------------------------------------------------------------------"<<endl;
break;
case 3:
cout<<"Enter dr name "<<endl;
cin>>DR;
cout<<"Enter DR id "<<endl;
cin>>did;
cout<<"Enter Dr department"<<endl;
cin>>dept;
cout<<"----------------------------------------------------------------------------------"<<endl;
cout<<"Doctor name="<<DR<<endl;
cout<<"Doctor id="<<did;
cout<<"Doctor department="<<dept;
cout<<"----------------------------------------------------------------------------------"<<endl;
break;
default:
cout<<"Plz Enter number Between 1 -3 \n Have a Good Life !!!";
break;
}
}while(ch !=4);
}
