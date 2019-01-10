#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<iomanip.h>
struct transactions
{
	char admno[11];
   char tdate[11];
   double amt;
};

struct student
{
	char admno[11];
   char name[25];
   int grade;
   char sec;
   int rollno;
   double fees;
   char admdate[11];
   transactions account;
};

void bubble1(student s1[], int n)
{
	for(int i=1; i<n; i++)
   {
   	for(int j=0; j<n-i; j++)
      {
      	if((strcmp(s1[j].admno,s1[j+1].admno)>0))
         {
         	student c=s1[j];
            s1[j]=s1[j+1];
            s1[j+1]=c;
         }
      }
   }
}

void display(student s2[], int n)
{
	cout<<"***SORTED DATA***"<<endl<<endl;
	for(int i=0; i<n; i++)
   {
   	cout<<"Admission No: "<<s2[i].admno<<endl;
      cout<<"Name: "<<s2[i].name<<endl;
      cout<<"Grade: "<<s2[i].grade<<endl;
      cout<<"Section: "<<s2[i].sec<<endl;
      cout<<"Roll No: "<<s2[i].rollno<<endl;
      cout<<"Fees: "<<s2[i].fees<<endl;
      cout<<"Admission Date: "<<s2[i].admdate<<endl;
      cout<<"Transaction Date: "<<s2[i].account.tdate<<endl;
      cout<<"Deposited Amount: "<<s2[i].account.amt<<endl;
      cout<<"************************"<<endl<<endl;
   }
}

void classlist(student s3[], int n)
{
	int m=1;
   int p=0;
   for(int k=1; k>0; k++)
   {
   	m=m+1;
      p=p+1;
   	int l;
	 	cout<<"Enter preferred choice:"<<endl;
   	cout<<"1-11A"<<endl;
   	cout<<"2-11B"<<endl;
   	cout<<"3-11C"<<endl;
   	cout<<"4-12A"<<endl;
   	cout<<"5-12B"<<endl;
   	cout<<"6-12C"<<endl;
   	cout<<"7-EXIT"<<endl;
   	cout<<"CHOICE: ";
   	cin>>l;
      cout<<"**********************************************************************"<<endl<<endl;
   if(l==1)
   {
   	cout<<"                                  CLASS LIST OF 11-A"<<endl;
   	cout<<"NAME"<<setw(30)<<"ROLL NO"<<setw(3)<<endl;
		for(int i=0; i<n; i++)
   	{
			if(s3[i].grade==11 && s3[i].sec=='A')
   		{
         	printf("%-30s %-3i", s3[i].name, s3[i].rollno);
         	cout<<endl<<endl;
   		}
   	}
      cout<<"**********************************************************************"<<endl<<endl;
   }
   if(l==2)
   {
   	cout<<"                                  CLASS LIST OF 11-B"<<endl;
   	cout<<"NAME"<<setw(30)<<"ROLL NO"<<setw(3)<<endl;
   	for(int a=0; a<n; a++)
   	{
      	if(s3[a].grade==11 && s3[a].sec=='B')
   		{
         	printf("%-30s %-3i", s3[a].name, s3[a].rollno);
         	cout<<endl<<endl;
   		}
   	}
      cout<<"**********************************************************************"<<endl<<endl;
   }
   if(l==3)
   {
   	cout<<"                                  CLASS LIST OF 11-C"<<endl;
   	cout<<"NAME"<<setw(30)<<"ROLL NO"<<setw(3)<<endl;
   	for(int b=0; b<n; b++)
   	{
      	if(s3[b].grade==11 && s3[b].sec=='C')
   		{
         	printf("%-30s %-3i", s3[b].name, s3[b].rollno);
         	cout<<endl<<endl;
   		}
   	}
      cout<<"**********************************************************************"<<endl<<endl;
   }
   if(l==4)
   {
   	cout<<"                                  CLASS LIST OF 12-A"<<endl;
   	cout<<"NAME"<<setw(30)<<"ROLL NO"<<setw(3)<<endl;
   	for(int c=0; c<n; c++)
   	{
      	if(s3[c].grade==12 && s3[c].sec=='A')
   		{
         	printf("%-30s %-3i", s3[c].name, s3[c].rollno);
         	cout<<endl<<endl;
   		}
   	}
      cout<<"**********************************************************************"<<endl<<endl;
   }
   if(l==5)
   {
   	cout<<"                                  CLASS LIST OF 12-B"<<endl;
   	cout<<"NAME"<<setw(30)<<"ROLL NO"<<setw(3)<<endl;
   	for(int d=0; d<n; d++)
   	{
      	if(s3[d].grade==12 && s3[d].sec=='B')
   		{
         	printf("%-30s %-3i", s3[d].name, s3[d].rollno);
         	cout<<endl<<endl;
   		}
   	}
      cout<<"**********************************************************************"<<endl<<endl;
   }
   if(l==6)
   {
   	cout<<"                                  CLASS LIST OF 12-C"<<endl;
   	cout<<"NAME"<<setw(30)<<"ROLL NO"<<setw(3)<<endl;
   	for(int e=0; e<n; e++)
   	{
      	if(s3[e].grade==12 && s3[e].sec=='C')
   		{
      	  	printf("%-30s %-3i", s3[e].name, s3[e].rollno);
         	cout<<endl<<endl;
   		}
   	}
      cout<<"**********************************************************************"<<endl<<endl;
   }
   if(l==7)
   k=p-m;
   }
}

void transactionsprinting(student s4[], int n, char d[])
{
	int sum=0;
   cout<<"NAME"<<setw(30)<<endl;
	for(int i=0; i<n; i++)
   {
   	if(stricmp(s4[i].account.tdate,d)==0)
      {
         printf("%-30s", s4[i].name);
         cout<<endl;
         sum+=s4[i].account.amt;
      }
   }
   cout<<endl;
   cout<<"Sum of transactions= "<<sum<<endl;
   cout<<"**********************************************************************"<<endl;
}

void validation1(int d, int m, int y)
{
	cout<<"**********************************************************************"<<endl;
	int md=0;
	cout<<"ADMISSION DATE"<<endl;
   if(y<2000 && y>2016)
   cout<<"INVALID YEAR ";
   else
   cout<<"VALID YEAR ";
   switch(m)
   {
   	case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
      md=31;
      break;

      case 4:
      case 6:
      case 9:
      case 11:
      md=30;
      break;

      case 2:
      md=28;
      break;

      default:
      cout<<"INVALID MONTH ";
   }
   if(md>0)
   {
   	if(d>0 && d<=md)
      cout<<"VALID DATE "<<endl;
      else
      cout<<"INVALID DATE "<<endl;
   }
   else
   cout<<"INVALID DATE INPUTED "<<endl;
   cout<<"**********************************************************************"<<endl<<endl;
}

void validation2(int d, int m, int y)
{
	cout<<"**********************************************************************"<<endl;
	int md=0;
	cout<<"TRANSACTION DATE"<<endl;
   if(y<2000 && y>2016)
   cout<<"INVALID YEAR ";
   else
   cout<<"VALID YEAR ";
   switch(m)
   {
   	case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
      md=31;
      break;

      case 4:
      case 6:
      case 9:
      case 11:
      md=30;
      break;

      case 2:
      md=28;
      break;

      default:
      cout<<"INVALID MONTH ";
   }
   if(md>0)
   {
   	if(d>0 && d<=md)
      cout<<"VALID DATE "<<endl;
      else
      cout<<"INVALID DATE "<<endl;
   }
   else
   cout<<"INVALID DATE INPUTED "<<endl;
   cout<<"**********************************************************************"<<endl<<endl;
}

void main()
{
	int m=1;
   int n=0;
   for(int k=1; k>0; k++)
   {
   	m=m+1;
      n=n+1;
   	int l;
   	cout<<"Enter preferred choice:"<<endl;
      cout<<"1-INPUT DATA"<<endl;
      cout<<"2-SORTING DATA INPUTED"<<endl;
		cout<<"3-DISPLAY SORTED DATA"<<endl;
      cout<<"4-CLASS LIST PRINTING"<<endl;
      cout<<"5-TRANSACTIONS PRINTING"<<endl;
      cout<<"6-DEFAULTERS LIST"<<endl;
      cout<<"7-EXIT"<<endl;
      cout<<"CHOICE: ";
      cin>>l;
      cout<<"*********************************************************************"<<endl<<endl;
      int dd,mm,yy,dd1,mm1,yy1;
      student s[3];
      if(l==1)
      {
   		int i=0;
   		while(i<3)
   		{
         	cout<<"STUDENT "<<i+1<<":"<<endl;
				cout<<"Enter your admission number (Format: xxxx/xxxxx): ";
   			cin>>s[i].admno;
   			cout<<"Enter your name: ";
   			gets(s[i].name);
      		cout<<"Enter class (11 and 12 only): ";
      		cin>>s[i].grade;
      		cout<<"Enter your section (A B C): ";
      		cin>>s[i].sec;
         	cout<<"Enter roll no(1-35): ";
      		cin>>s[i].rollno;
      		cout<<"Enter fees: ";
      		cin>>s[i].fees;
      		cout<<"Enter the date month year of admission date (d m y): ";
      		cin>>dd>>mm>>yy;
            validation1(dd,mm,yy);
      		cout<<"Enter admission date (Format: dd/mm/yyyy): ";
      		cin>>s[i].admdate;
      		cout<<endl;
      		cout<<"FOR TRANSACTIONS"<<endl;
				cout<<"Enter admission no (Format: xxxx/xxxxx): ";
      		cin>>s[i].account.admno;
      		cout<<"Enter the date month year of transaction day (d m y): ";
      		cin>>dd1>>mm1>>yy1;
            validation2(dd1,mm1,yy1);
      		cout<<"Enter transactions date (Format: dd/mm/yyyy): ";
      		cin>>s[i].account.tdate;
      		cout<<"Enter amount deposited: ";
      		cin>>s[i].account.amt;
      		cout<<"*******************************************************************"<<endl<<endl;
      		i=i+1;
   		}
      }
      if(l==2)
		bubble1(s,3);
      if(l==3)
   	display(s,3);
      if(l==4)
   	classlist(s,3);
      if(l==5)
      {
			char date[11];
   		cout<<"Enter date to check for transactions (Format dd/mm/yyyy): ";
   		cin>>date;
   		cout<<endl;
   		transactionsprinting(s,3,date);
      }
      if(l==6)
      {
   		int d,m,y;
   		cout<<"Enter the the date month year of limit day (d m y): ";
   		cin>>d>>m>>y;
   		cout<<endl;
   		int sum=0;
         cout<<"                                      DEFAULTERS LIST"<<endl;
         cout<<"NAME"<<setw(30)<<endl;
   		for(int j=0; j<3; j++)
   		{
				if(dd1>d && mm1<=m && yy1<=y)
      		{
         		printf("%-30s", s[j].name);
         		cout<<endl;
         		sum+=s[j].account.amt;
      		}
   		}
   		cout<<endl;
   		cout<<"SUM OF TRANSACTIONS= "<<sum<<endl;
   		cout<<"**********************************************************************"<<endl;
      }
         if(l==7)
         {
				k=n-m;
            cout<<"*********PROGRAM TERMINATED**********"<<endl;
         }
   }
			getch();
}




