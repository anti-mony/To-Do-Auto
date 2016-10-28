void editPriority( )
{
    int priority;
    char newkey;
    cout<<"enter the new keyword"<<endl;
    cin<<newkey;
    cout<<"enter the priority of the keyword"<<endl;
    cin<<priority;
    if(priority==2)
    {
        ofstream datafile2("2.txt",ios::out | ios::app);
        datafile2<<newkey<<endl;
    }
    else if(priority==3)
    {
       ofstream datafile3("3.txt",ios::out | ios::app);
        datafile2<<newkey<<endl;
    }
    else if(priority==4)
    {
       ofstream datafile4("4.txt",ios::out | ios::app);
        datafile2<<newkey<<endl;
    }
    else if(priority==5)
    {
        ofstream datafile5("5.txt",ios::out | ios::app);
        datafile2<<newkey<<endl;
    }
    else if(priority==6)
    {
        ofstream datafile6("6.txt",ios::out | ios::app);
        datafile2<<newkey<<endl;
    }
    else if(priority==7)
    {
        ofstream datafile7("7.txt",ios::out | ios::app);
        datafile2<<newkey<<endl;
    }
    else if(priority==8)
    {
        ofstream datafile8("8.txt",ios::out | ios::app);
        datafile2<<newkey<<endl;
    }
    else if(priority==9)
    {
        ofstream datafile9("2.txt",ios::out | ios::app);
        datafile2<<newkey<<endl;
    }
    else if(priority==10)
    {
        ofstream datafile10("10.txt",ios::out | ios::app);
        datafile2<<newkey<<endl;
    }
}

void findDelete( )
{
   ifstream usernameObj(str,ios::in|ios::binary);
   string strname;
   string del(" ");
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

                strname.swap(del);

            }
        }

        ifstream dataFile9("9.txt",ios::in | ios::binary);
        while(dataFile9 >> wordchk)
        {
            if(wordchk == strname)
            {

                strname.swap(del);

            }
        }
        ifstream dataFile8("8.txt",ios::in | ios::binary);
        while(dataFile8 >> wordchk)
        {
            if(wordchk == strname)
            {
                strname.swap(del);
            }
        }
        ifstream dataFile7("7.txt",ios::in | ios::binary);
        while(dataFile7 >> wordchk)
        {
            if(wordchk == strname)
            {
                strname.swap(del);
            }
        }
        ifstream dataFile6("6.txt",ios::in | ios::binary);
        while(dataFile6 >> wordchk)
        {
            if(wordchk == strname)
            {
                strname.swap(del);
            }
        }
        ifstream dataFile5("5.txt",ios::in | ios::binary);
        while(dataFile5 >> wordchk)
        {
            if(wordchk == strname)
            {
                strname.swap(del);
            }
        }
        ifstream dataFile4("4.txt",ios::in | ios::binary);
        while(dataFile4 >> wordchk)
        {
            if(wordchk == strname)
            {
                strname.swap(del);
            }
        }
        ifstream dataFile3("3.txt",ios::in | ios::binary);
        while(dataFile3 >> wordchk)
        {
            if(wordchk == strname)
            {
                strname.swap(del);
            }
        }
        ifstream dataFile2("2.txt",ios::in | ios::binary);
        while(dataFile2 >> wordchk)
        {
            if(wordchk == strname)
            {
                strname.swap(del);
            }
        }
    }
    int main()
    {

    }
