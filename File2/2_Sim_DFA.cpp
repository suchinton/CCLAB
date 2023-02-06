/*
    WAP in C/C++ to implement the following dfa for the language: 
    L = { W->{0,1}^* | W is interpreted as a binary sting & div by 5}
    Eg. l = {NULL, 101, 1010, 1111,..., etc}

    14 June 22 
*/

#include<iostream>
#include<string.h>

using namespace std;

int dfa=0;

int start(char c);
int state1(char c);
int state2(char c);
int state3(char c);
int state4(char c);
int isAccepted(string str);

int main()
{
    system("clear");

    cout<<"\n| Suchinton (A2345920063)                                                   |";
    cout<<"\n|---------------------------------------------------------------------------|";
    cout<<"\n| DFA for L = { W->{0,1}^* | W is interpreted as a binary sting & div by 5} |";
    cout<<"\n|---------------------------------------------------------------------------|";
    cout<<"\n| i.e. L = {0101, 1010, 1111, 10100, 11001, etc}                            |";
    cout<<"\n|---------------------------------------------------------------------------|"<<endl;
    
    string str;
    cout<<"\nEnter string input: ";
    cin>>str;
    
    int ans = isAccepted(str);
    if(ans == 1)
        cout<<" String is accepted";
    else
        cout<<" Not accepted";
    return 0;
}

int isAccepted(string str)
{
    int len = str.length();

    for(int i=0; i<len; i++)
    {
        cout<<" q"<<dfa<<" -->";
        if(dfa == 0)
            start(str[i]);
        else if(dfa == 1)
            state1(str[i]);
        else if(dfa == 2)
            state2(str[i]);
        else if(dfa == 3)
            state3(str[i]);
        else if(dfa == 4)
            state4(str[i]);
        else
            break;
    }
    if (dfa == 0)
        return 1;
    else
        return 0;
}

int start(char c)
{
    if ( c == '0' )
        dfa = 0;
    else 
        dfa = 1;
    return 0;
}

int state1(char c)
{
    if ( c == '0' )
        dfa = 2;
    else 
        dfa = 3;
    return 0;
}
int state2(char c)
{
    if ( c == '0' )
        dfa = 4;
    else 
        dfa = 0;
    return 0;
}
int state3(char c)
{
    if ( c == '0' )
        dfa = 1;
    else 
        dfa = 2;
    return 0;
}
int state4(char c)
{
    if ( c == '0' )
        dfa = 3;
    else 
        dfa = 4;
    return 0;
}