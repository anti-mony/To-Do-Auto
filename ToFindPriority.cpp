#include <iostream>
#include<fstream>
#include<string>
#include<windows.h>
#include<conio.h>
#include<stdio.h>



using namespace std;

int CountWord()
{
    //ofstream a("list.txt",ios::out | ios::app | ios::binary);
    //a<<"awesome"<<endl;
    //ofstream b("10.txt",ios::out | ios::app | ios::binary);
    //b<<"awesome"<<endl;
    ifstream usernameObj("list.txt",ios::in|ios::binary);
    string strname;
    int chck=0;
    while(usernameObj >> strname)
    {
        //cout<<strname;
        ifstream dataFile("10.txt",ios::in | ios::binary);
        string wordchk;


        while(dataFile >> wordchk)
            {
                //cout<<wordchk;
                if(wordchk == strname)
                {

                    chck=1;
                    return 10;
                }
            }
    }
    if(chck!=1)
    {
        return -1;
    }

}

int main()
{
    int x = CountWord();
    cout<<endl<<x<<endl;
}
