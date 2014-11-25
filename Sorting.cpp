#include <fstream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

class Stock
{
 char Item[20];
 public:
 void Input()
 {gets(Item);}
 void Output()
 {puts(Item);}
};


void viewOldList(char Fname[])
{
 fstream Fil; Stock S;
 Fil.open(Fname,ios::binary|ios::in);
 while (Fil.read((char*)&S,sizeof(S)))
 S.Output();

 Fil.close();
}

void Create(char Fname[])
{
 fstream Fil; Stock S;
 Fil.open(Fname,ios::binary|ios::out);
 char Choice;
 do
 {
 S.Input();
 Fil.write((char*)&S,sizeof(S));
 cout<<"More(Y/N)?";cin>>Choice;
 }
 while (Choice=='Y');
 Fil.close();
}


void SortList(char Fname[])
{
 fstream F;
 F.open(Fname,ios::binary|ios::in|ios::out);
 //Move to the last record
 F.seekg(0,ios::end); //To move the record pointer to end of file
 int NOR=F.tellg()/sizeof(Stock); //To find number of records in the file
 Stock EJ,EJP1;
 for (int i=0;i<NOR-1;i++)
 for (int j=0;j<NOR-i-1;j++)
 {
 F.seekg(j*sizeof(Stock)); //To move the file pointer to jth position
 F.read((char*)&EJ,sizeof(Stock)); //reads jth record
 F.read((char*)&EJP1,sizeof(Stock)); //reads (j+1)th record


 if (EJ.GetEno()<EJP1.GetEno()) ******HERE GetEno Function returns the priority level of the words*****
 {
 F.seekp(j*sizeof(Stock));
 F.write((char*)&EJP1,sizeof(Stock));
 F.write((char*)&EJ,sizeof(Stock));
 }
 }
 F.close();
}
