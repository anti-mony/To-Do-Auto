#include <iostream>
#include<string>
#include<string.h>
#include<fstream>
#include<windows.h>
#include<conio.h>
#include<stdio.h>
#include<cstdlib>
#define debug 0

using namespace std;

void sortlist(char str[]);
int findmax(char str[]);
int noOfLines(char str[]);
void rewritelist(char str[]);

string S1[8];
int storePriority[8];
int x=0;
int i;
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
        string password;
        char ch;
        int serial;
        string tmppass;



    public:


        void createUserInfo()
        {
            cout<<"Please enter your desired User name (** MAX 12 characters **)"<<endl;
            cin>>userName;
            cout<<"Enter your password(** MAX 10 characters **)"<<endl;
            ch=_getch();
            while(ch!=13)
               {
                    password.push_back(ch);
                    cout<<'*';
                    ch=_getch();
               }
            cout<<endl;
            ofstream dataFile("logindat.txt",ios::out | ios::app);
            dataFile << userName <<' '<< password<<endl<<endl;
        }
        int readUserInfo()
        {
            ifstream dataFile("logindat.txt",ios::in);
            cout<<"Please enter your Username (** MAX 12 characters **)"<<endl;
            cin>>tempusr;
            cout<<"Enter your password(** MAX 10 characters **)"<<endl;
            ch=_getch();
            while(ch!=13)
               {
                    tmppass.push_back(ch);
                    cout<<'*';
                    ch=_getch();
               }
            cout<<endl;
            if(debug==1)
            {
                cout<<tempusr<<' '<<tmppass<<endl<<endl;
            }
            int chck=0;
            while(dataFile >> userName >> password)
            {
                if(strcmp(userName,tempusr)==0 && (password==tmppass))
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


void displaytodo(char str[])
{
    ifstream display(str,ios::in|ios::binary);
    int SNo=1;
    string str1;
    cout<<endl<<"Your to-do list !!!"<<endl;
    cout<<SNo;
    while(display>>str1)
    {
        if(str1==".")
        {
            SNo++;
            cout<<endl<<SNo;

        }
        else
        {
            if(str1!="exit")
            cout<<' '<<str1;
        }

    }

}

void createtodo(char str[])
{
  ofstream I(str,ios::out|ios::binary);
  char str1[25];
  do
  {
    gets(str1);
    I<<str1;
    I<<endl;
  }
  while(strcmp(str1,"exit")!=0);
}


void sortlist(char str[])
{
    ifstream todofile(str,ios::in);
    for(i=0;i<noOfLines(str);i++)
    {
        getline(todofile,S1[i]);
    }
}

int noOfLines(char str[])
{
    ifstream read(str,ios::in);
    int cnt=0;
    string S;
    while(read>>S)
    {
        if(S==".")
        {
            cnt++;
        }
    }
    return cnt;
}

int findmax(char str[])
{
    int mx=-1;
    int index;
    for(int i=0;i<noOfLines(str);i++)
    {
        if(storePriority[i]>=mx)
        {
            mx=storePriority[i];
            index=i;
        }
    }
    return index;
}

void rewritelist(char str[])
{
    string S;
    sortlist(str);
    int j;
    ofstream file("TEMPORARY",ios::out);
    for(j=0;j<noOfLines(str);j++)
    {
        file<<S1[findmax(str)]<<endl;
        storePriority[findmax(str)]=-1;
    }
    ifstream filex("TEMPORARY",ios::in);
    ofstream filey(str,ios::out);
    while(filex>>S)
    {
        filey<<S<<' ';
        if(S==".")
        {
            filey<<endl;
        }
    }


}

void checkList(char str[])
{
    displaytodo(str);
    cout<<"Enter the serial of the task you have done "<<endl;
}



void editPriority()
{
    string newkey;
    int priority;
    cout<<"enter the new keyword"<<endl;
    cin>>newkey;
    cout<<"how important is this to you on a scale of 2 - 10"<<endl;
    cout<<endl<<"We don't take in 1 , if it is 1 then don't do the thing "<<endl;
    cin>>priority;
    if(priority==2)
    {
        ofstream datafile2("2.txt",ios::out | ios::app);
        datafile2<<endl<<newkey<<endl;
    }
    if(priority==3)
    {
       ofstream datafile3("3.txt",ios::out | ios::app);
        datafile3<<endl<<newkey<<endl;
    }
    if(priority==4)
    {
       ofstream datafile4("4.txt",ios::out | ios::app);
        datafile4<<endl<<newkey<<endl;
    }
    if(priority==5)
    {
        ofstream datafile5("5.txt",ios::out | ios::app);
        datafile5<<endl<<newkey<<endl;
    }
    if(priority==6)
    {
        ofstream datafile6("6.txt",ios::out | ios::app);
        datafile6<<endl<<newkey<<endl;
    }
    if(priority==7)
    {
        ofstream datafile7("7.txt",ios::out | ios::app);
        datafile7<<endl<<newkey<<endl;
    }
    if(priority==8)
    {
        ofstream datafile8("8.txt",ios::out | ios::app);
        datafile8<<endl<<newkey<<endl;
    }
    if(priority==9)
    {
        ofstream datafile9("9.txt",ios::out | ios::app);
        datafile9<<endl<<newkey<<endl;
    }
    if(priority==10)
    {
        ofstream datafile10("10.txt",ios::out | ios::app);
        datafile10<<endl<<newkey<<endl;
    }

}

void findDelete()
{
    char strname[20];
   char strde1[20];
   string S ;
   int k=0;
   cout<<"enter the keyword you want to delete"<<endl;
   cin>>strde1;

        string wordchk;
        {
            ifstream dataFile10("10.txt",ios::in);
            ofstream D1("D.txt",ios::out);
            while(dataFile10 >> wordchk)
            {

                    if(wordchk != strde1)
                    {
                        D1<<wordchk<<endl;
                    }

            }
            ifstream D2("D.txt",ios::in);
            ofstream dataF10("10.txt",ios::out);
            while(D2>>S)
            {
                dataF10<<S<<endl;
            }
        }
}





int main()
{

   char loginExitVar;
   int loginMenu;
   int subLoginMenu;
   char YESSS;
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
        loginSystem newUser;

        switch(loginMenu)
       {
            case 1 :if(existingUser.readUserInfo()== 1 )
                    {
                            SLogM:
                            system("cls");
                            cout<<"\tWhat do you want to do now ??"<<endl;
                            cout<<" 1. Create a new to-do list "<<endl;
                            cout<<" 2. View previous list "<<endl;
                            cout<<" 3. Add new words to database "<<endl;
                            cout<<" 4. Remove words from the database "<<endl;
                            cout<<" 5. Logout"<<endl;
                            cin>>subLoginMenu;
                            switch(subLoginMenu)
                            {
                                case 1 :    createtodo(tempusr); // Function not working properly .
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
                                           rewritelist(tempusr);

                                            for(i=0;i<50;i++)
                                            {
                                                Sleep(100);
                                                printf("%c",177);
                                            }
                                            cout<<"You have successfully created a to-do"<<endl;
                                            cout<<"Press Y to return to main menu"<<endl;
                                            if(YESSS=='Y' || YESSS=='y')
                                            {
                                                    goto SLogM ;
                                            }
                                            else
                                            {
                                                goto Exit;
                                            }


                                case 2 :CountWord(tempusr);
                                        rewritelist(tempusr);
                                        cout<<"Sorting for you ..."<<endl;
                                        for(i=0;i<20;i++)
                                        {
                                            Sleep(80);
                                            printf("%c",177);
                                        }
                                        displaytodo(tempusr);
                                        cout<<endl<<"Return to previous menu Y/N"<<endl;
                                        cin>>YESSS;
                                        if(YESSS=='Y' || YESSS=='y')
                                            {
                                                    goto SLogM ;
                                            }
                                            else
                                            {
                                                goto Exit;
                                            }

                                case 3 :editPriority();
                                        if(YESSS=='Y' || YESSS=='y')
                                            {
                                                    goto SLogM ;
                                            }
                                            else
                                            {
                                                goto Exit;
                                            }
                                case 4 :cout<<"Work in Progress"<<endl;
                                        Sleep(1000);
                                        //findDelete();
                                        goto SLogM ;
                                case 5 : cout<<endl<<"Thanks !!  :)"<<endl;
                                            goto Exit;
                            }
                            break;
                    }
                    else
                    {
                            break;
                    }


            case 2: newUser.createUserInfo();
                    break;

            case 3: goto XXXX;


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
        cout<<"Do you wish to go to main menu again Y/N"<<endl;
        cin>>loginExitVar;
        cout<<endl;
        system("cls");
   }
    while(loginExitVar=='Y' || loginExitVar=='y');

    if(loginExitVar!='Y' || loginExitVar!='y')
    {
        XXXX:
        cout<<"Thank You for using this ..."<<endl;
        Sleep(1000);
        system("cls");
    }
}
