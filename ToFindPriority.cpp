#include <iostream>
#include<fstream>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include<stdio.h>
//#include<graphics.h>


using namespace std;
int storePriority[8];
int x=0;
void CountWord()
{
    //ofstream a("9.txt",ios::out | ios::app | ios::binary);
    //ofstream b("8.txt",ios::out | ios::app | ios::binary);
    //a<<"i"<<endl;
    //b<<"am"<<endl;
    ifstream usernameObj("list.txt",ios::in|ios::binary);
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
    if(strname == ".")
    {
    storePriority[x]=priorityCount;
      priorityCount=0;
      x++;
    }

    }


}

int main()
{
    CountWord();
    //cout<<endl<<x<<endl;
    cout<<endl<<storePriority[0]<<endl;
    cout<<endl<<storePriority[1]<<endl;
}
