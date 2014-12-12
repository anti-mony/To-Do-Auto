#include <iostream>
#include<string>
#include<string.h>
#include<fstream>
#include<windows.h>
#include<conio.h>
#include<stdio.h>
#define debug 0

using namespace std;



int storePriority[8];
int x=0;
char tempusr[12];
/*
class Pragya
{   public:
    void EnterNote()
    {
        char str[20];
        cout<<"Enter your notes";
        cin.getline(str,20);
    }
};



void CreateNote(char username[])
{
    char x[15];
    char ch='y';
    ofstream fout;
    fout.open(x,ios::out);
    Pragya ob;
    while(ch=='y'||ch=='Y')
    {
        ob.EnterNote();
        fout.write((char*)&ob,sizeof(ob)); //ob is object of class
        cout<<"Note added";
        cout<<"Do you want to enter more notes? \n \tPress Y/N";
        cin>>ch;
    }
}

*/

class loginSystem
{
    private:

        char userName[12];
        char password[10];
        char ch;
        int serial;
        char tmppass[10];



    public:


        void createUserInfo()
        {
            cout<<"Please enter your desired User name (** MAX 12 characters **)"<<endl;
            cin>>userName;
            cout<<"Enter your password(** MAX 10 characters **)"<<endl;
            cin>>password;

            ofstream dataFile("logindat.txt",ios::out | ios::app);
            dataFile << userName <<' '<< password<<endl<<endl;
        }
        int readUserInfo()
        {
            ifstream dataFile("logindat.txt",ios::in);
            cout<<"Please enter your Username (** MAX 12 characters **)"<<endl;
            cin>>tempusr;
            cout<<"Enter your password(** MAX 10 characters **)"<<endl;
            cin>>tmppass;
            if(debug==1)
            {
                cout<<tempusr<<' '<<tmppass<<endl<<endl;
            }
            int chck=0;
            while(dataFile >> userName >> password)
            {
                if(debug==1)
                {
                    cout<<userName<<' '<<password<<endl;
                    cout<<"\t"<<strcmp(userName,tempusr)<<endl;
                    cout<<"\t"<<strcmp(password,tmppass)<<endl;
                }

                if(strcmp(userName,tempusr)==0 && strcmp(password,tmppass)==0)
                {
                    cout<<"You have successfully logged in"<<endl;
                    chck=1;
                    return chck;
                }

            }
            if(chck==0)
            {
                cout<< endl;
                cout<<"Username or password you entered is incorrect "<<endl<<"OR"<<endl<<"**User doesn't exists !! ,Please create a user **"<<endl;
                return chck;
            }



        }

};

//*************************************************************************************************************************//

class Stock
{

 public:
    char Item[200];
    void Input()
    {
        gets(Item);
    }
    void Output()
    {
        cout<<Item;
    }

};

 void CountWord(char str[])
{
    //ofstream a("3.txt",ios::out | ios::app | ios::binary);
    //ofstream b("2.txt",ios::out | ios::app | ios::binary);
    //a<<"i"<<endl;
    //b<<"am"<<endl;
    ifstream usernameObj(str,ios::in|ios::binary);
    string strname;
    int chck=0;

    int priorityCount=0;
    while(usernameObj >> strname)
    {
        string wordchk;
        char check;

        ifstream dataFile10("10.txt",ios::in | ios::binary);

        while(dataFile10 >> wordchk)
        {
            if(wordchk == strname)
            {
                //cout<<wordchk;
                chck=1;
                priorityCount+=10;
            }
        }

        ifstream dataFile9("9.txt",ios::in | ios::binary);
        while(dataFile9 >> wordchk)
        {
            if(wordchk == strname)
            {
                //cout<<wordchk;
                chck=1;
                priorityCount+=9;
            }
        }
        ifstream dataFile8("8.txt",ios::in | ios::binary);
        while(dataFile8 >> wordchk)
        {
            if(wordchk == strname)
            {
                //cout<<wordchk;
                chck=1;
                priorityCount+=8;
            }
        }
        ifstream dataFile7("7.txt",ios::in | ios::binary);
        while(dataFile7 >> wordchk)
        {
            if(wordchk == strname)
            {
                //cout<<wordchk;
                chck=1;
                priorityCount+=7;
            }
        }
        ifstream dataFile6("6.txt",ios::in | ios::binary);
        while(dataFile6 >> wordchk)
        {
            if(wordchk == strname)
            {
                //cout<<wordchk;
                chck=1;
                priorityCount+=6;
            }
        }
        ifstream dataFile5("5.txt",ios::in | ios::binary);
        while(dataFile5 >> wordchk)
        {
            if(wordchk == strname)
            {
                //cout<<wordchk;
                chck=1;
                priorityCount+=5;
            }
        }
        ifstream dataFile4("4.txt",ios::in | ios::binary);
        while(dataFile4 >> wordchk)
        {
            if(wordchk == strname)
            {
                //cout<<wordchk;
                chck=1;
                priorityCount+=4;
            }
        }
        ifstream dataFile3("3.txt",ios::in | ios::binary);
        while(dataFile3 >> wordchk)
        {
            if(wordchk == strname)
            {
                //cout<<wordchk;
                chck=1;
                priorityCount+=3;
            }
        }
        ifstream dataFile2("2.txt",ios::in | ios::binary);
        while(dataFile2 >> wordchk)
        {
            if(wordchk == strname)
            {
                //cout<<wordchk;
                chck=1;
                priorityCount+=2;
            }
        }
    if(strname == ".")
    {
    storePriority[x]=priorityCount;
      priorityCount=0;
      x++;
    }

    }


}






void viewOldList(char Fname[])
{
 fstream Fil;

 Fil.open(Fname,ios::in);
 char Lin[80];
 while (Fil.getline(Lin,80))//Checks for End of File
 {
 Fil.getline(Lin,80);//Reading a line from File
 for (int I=0;I<=strlen(Lin)-1;I++)
 cout<<Lin[I];
 cout<<endl;
 }

 Fil.close();
}


void Create(char Fname[])
{
    fstream Fil;
     Fil.open(Fname,ios::out);
     char Lin[200];
     char Q;
    cout<<"Enter Text";
     do
    {

        gets(Lin); //User inputs the data in a string Lin
        Fil<<Lin<<endl; //Writing of content of Lin on file

        cout<<"More(Y/N)?";
        cin>>Q;
    }

    while (Q == 'Y' || Q == 'y');

    Fil.close();
}



void SortList(char Fname[])
{   fstream F;
    F.open(Fname,ios::in);

    int temp,countx=0,k=0;
    char Lin[80];

while (F.getline(Lin,80)) //Checks for total number of lines
{ countx++;}
int i,j;
char Lin2[countx][80],strtemp[80];   //Initializing an array of strings called lin2

for (i=0; i<countx; i++)  //Storing all lines in a string array called Lin2
{F.getline(Lin2[i],80);}

//Code to sort the array that contains all priority numbers as well as the string array accordingly
  for(i=0;i<countx;i++)
  {
        for(j=i+1;i<countx;j++)
        {
            if(storePriority[i]<storePriority[j]) //returnp returns the priority of the line
            {
                temp=storePriority[j];
                storePriority[j]=storePriority[i];
                storePriority[i]=temp;
                strcpy(strtemp,Lin2[j]);
                strcpy(Lin2[j],Lin2[i]);
                strcpy(Lin2[i],strtemp);
            }
        }
  }



//To overwrite the sorted array of string Lin2 in the file
while (F.getline(Lin,80) && i<countx)
{F<<Lin2[i]<<endl; //Writing of content of Lin on file
 k++;
}

F.close();
}

void editPriority(char *newkey,int priority)
{

    cout<<"enter the new keyword"<<endl;
    cin>>newkey;
    cout<<"enter the priority of the keyword"<<endl;
    cin>>priority;
    if(priority==2)
    {
        ofstream datafile2("2.txt",ios::out | ios::app);
        datafile2<<newkey<<endl;
    }
    if(priority==3)
    {
       ofstream datafile3("3.txt",ios::out | ios::app);
        datafile3<<newkey<<endl;
    }
    if(priority==4)
    {
       ofstream datafile4("4.txt",ios::out | ios::app);
        datafile4<<newkey<<endl;
    }
    if(priority==5)
    {
        ofstream datafile5("5.txt",ios::out | ios::app);
        datafile5<<newkey<<endl;
    }
    if(priority==6)
    {
        ofstream datafile6("6.txt",ios::out | ios::app);
        datafile6<<newkey<<endl;
    }
    if(priority==7)
    {
        ofstream datafile7("7.txt",ios::out | ios::app);
        datafile7<<newkey<<endl;
    }
    if(priority==8)
    {
        ofstream datafile8("8.txt",ios::out | ios::app);
        datafile8<<newkey<<endl;
    }
    if(priority==9)
    {
        ofstream datafile9("9.txt",ios::out | ios::app);
        datafile9<<newkey<<endl;
    }
    if(priority==10)
    {
        ofstream datafile10("10.txt",ios::out | ios::app);
        datafile10<<newkey<<endl;
    }

}

void findDelete()
{
   ifstream usernameObj("D",ios::in|ios::binary);
   char strname[20];
   char strde1[20];
   string S ;
   int k=0;
   cout<<"enter the keyword you want to delete"<<endl;
   cin>>strde1;
    while(k)
    {
        string wordchk;
        ifstream dataFile10("10.txt",ios::in | ios::binary);
        while(dataFile10 >> wordchk)
        {
            if(wordchk==strde1)
            {
                ofstream D("D",ios::out | ios :: binary);
                if(wordchk != strde1)
                {
                    D<<wordchk<<endl;
                }


                ifstream D2("D",ios::in | ios :: binary);
                ofstream I2("10.txt",ios::out | ios :: binary );
                while(D2>>S)
                {
                    I2<<S<<endl;
                }
                return ;
            }

        }
        ifstream dataFile9("9.txt",ios::in | ios::binary);
        while(dataFile9 >> wordchk)
        {
            if(wordchk==strde1)
            {
                ofstream D("D",ios::out | ios :: binary);
                if(wordchk != strde1)
                {
                    D<<wordchk<<endl;
                }

                ifstream D2("D",ios::in | ios :: binary);
                ofstream I2("9.txt",ios::out | ios :: binary );
                while(D2>>S)
                {
                    I2<<S<<endl;
                }
                return ;
            }

        }
        ifstream dataFile8("8.txt",ios::in | ios::binary);
        while(dataFile8 >> wordchk)
        {
            if(wordchk==strde1)
            {
                ofstream D("D",ios::out | ios :: binary);
                if(wordchk != strde1)
                {
                    D<<wordchk<<endl;
                }

                ifstream D2("D",ios::in | ios :: binary);
                ofstream I2("8.txt",ios::out | ios :: binary );
                while(D2>>S)
                {
                    I2<<S<<endl;
                }
                return ;
            }

        }
        ifstream dataFile7("7.txt",ios::in | ios::binary);
        while(dataFile7 >> wordchk)
        {
            if(wordchk==strde1)
            {
                ofstream D("D",ios::out | ios :: binary);
                if(wordchk != strde1)
                {
                    D<<wordchk<<endl;
                }

                ifstream D2("D",ios::in | ios :: binary);
                ofstream I2("7.txt",ios::out | ios :: binary );
                while(D2>>S)
                {
                    I2<<S<<endl;
                }
                return ;
            }

        }
        ifstream dataFile6("6.txt",ios::in | ios::binary);
        while(dataFile6 >> wordchk)
        {
            if(wordchk==strde1)
            {
                ofstream D("D",ios::out | ios :: binary);
                if(wordchk != strde1)
                {
                    D<<wordchk<<endl;
                }

                ifstream D2("D",ios::in | ios :: binary);
                ofstream I2("6.txt",ios::out | ios :: binary );
                while(D2>>S)
                {
                    I2<<S<<endl;
                }
                return ;
            }

        }
        ifstream dataFile5("5.txt",ios::in | ios::binary);
        while(dataFile5 >> wordchk)
        {
            if(wordchk==strde1)
            {
                ofstream D("D",ios::out | ios :: binary);
                if(wordchk != strde1)
                {
                    D<<wordchk<<endl;
                }

                ifstream D2("D",ios::in | ios :: binary);
                ofstream I2("5.txt",ios::out | ios :: binary );
                while(D2>>S)
                {
                    I2<<S<<endl;
                }
                return ;
            }

        }
        ifstream dataFile4("4.txt",ios::in | ios::binary);
        while(dataFile4 >> wordchk)
        {
            if(wordchk==strde1)
            {
                ofstream D("D",ios::out | ios :: binary);
                if(wordchk != strde1)
                {
                    D<<wordchk<<endl;
                }

                ifstream D2("D",ios::in | ios :: binary);
                ofstream I2("4.txt",ios::out | ios :: binary );
                while(D2>>S)
                {
                    I2<<S<<endl;
                }
                return ;
            }

        }
        ifstream dataFile3("3.txt",ios::in | ios::binary);
        while(dataFile3 >> wordchk)
        {
            if(wordchk==strde1)
            {
                ofstream D("D",ios::out | ios :: binary);
                if(wordchk != strde1)
                {
                    D<<wordchk<<endl;
                }

                ifstream D2("D",ios::in | ios :: binary);
                ofstream I2("3.txt",ios::out | ios :: binary );
                while(D2>>S)
                {
                    I2<<S<<endl;
                }
                return ;
            }

        }
        ifstream dataFile2("2.txt",ios::in | ios::binary);
        while(dataFile2 >> wordchk)
        {
            if(wordchk==strde1)
            {
                ofstream D("D",ios::out | ios :: binary);
                if(wordchk != strde1)
                {
                    D<<wordchk<<endl;
                }

                ifstream D2("D",ios::in | ios :: binary);
                ofstream I2("2.txt",ios::out | ios :: binary );
                while(D2>>S)
                {
                    I2<<S<<endl;
                }
                return;
            }

        }

    }

}




int main()
{
    /*
   char loginExitVar;
   int loginMenu;
   int subLoginMenu;
   string tempstr;
   cout << endl;


   do
   {
        cout<<"Enter 1 to Login"<<endl;
        cout<<"Enter 2 for Creating a New User"<<endl;
        cout<<"Enter 3 to Exit"<<endl;
        cout<<"Enter 4 for Help(We don't mean SOS!!)"<<endl;
        cin >> loginMenu;
        cout << endl;
        loginSystem existingUser;

        switch(loginMenu)
       {
            case 1 :if(existingUser.readUserInfo()== 1 )
                    {
                            system("cls");
                            cout<<"\tWhat do you want to do now ??"<<endl;
                            cout<<" 1. Create a new to-do list "<<endl;
                            cout<<" 2. View previous list "<<endl;
                            cout<<" 3. Create Notes "<<endl;
                            cout<<" 4. Logout"<<endl;
                            cin>>subLoginMenu;
                            switch(subLoginMenu)
                            {
                                case 1 :    Create(tempusr); // Function not working properly .
                                            //toDoItem(tempusr);
                                            CountWord(tempusr);

                                            if(debug == 1)
                                            {
                                                cout<<storePriority[0]<<endl;
                                                cout<<storePriority[1]<<endl;
                                                cout<<storePriority[2]<<endl;
                                                cout<<storePriority[3]<<endl;
                                                cout<<storePriority[4]<<endl;
                                            }
                                           int i;
                                           SortList(tempusr);

                                            for(i=0;i<50;i++)
                                            {
                                                Sleep(100);
                                                printf("%c",177);
                                            }
                                            cout<<"You have successfully created a to-do"<<endl;

                                case 2 : viewOldList(tempusr);
                                //case 3 : CreateNote(tempusr);
                                case 4 : cout<<endl<<"Thanks !!  :)"<<endl;
                                            goto Exit;
                            }
                            break;
                    }
                    else
                    {
                            break;
                    }


            case 2: loginSystem newUser;
                    newUser.createUserInfo();
                    break;

            case 3: cout<<"Thanks"<<endl;
                    return 0;

            case 4: ifstream Help("Help.txt",ios::in);
                    system("cls");
                    while(Help>>tempstr)
                    {
                        if(tempstr=="..")
                        {
                            cout<<endl;
                        }
                        if(tempstr!="..")
                        {
                            cout<<tempstr<<' ';
                        }
                    }
                    break;


        }

       Exit:
        cout<<"Do you wish to login again Press Y/N"<<endl;
        cin>>loginExitVar;
        cout<<endl;
        system("cls");
   }
    while(loginExitVar=='Y' || loginExitVar=='y');
    */
    findDelete();
}
