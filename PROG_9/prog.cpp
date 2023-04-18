#include <iostream>
#include <string>
using namespace std;

bool parse(string string) 
{ 
    if(string.substr(0, 2) == "ab") 
    { 
        if(string[string.length() - 1] == 'c') 
        {
            return true;
        } 
        else if (string.substr(string.length() - 2) == "cC") 
        {
            return parse(string.substr(0, string.length() - 2));
        } 
        else 
        {
            return false;
        }
    } 
    else if (string.substr(0, 3) == "abA") 
    {
        return parse(string.substr(3)); 
    } 
    else if(string.substr(0, 2) == "BC") 
    { 
        return parse(string.substr(2));
    } 
    else 
    {
        return false;
} } 

int main() 
{
    system("clear");
    cout<<"\n| Suchinton (A2345920063)                   |";
    cout<<"\n|-------------------------------------------|";
    cout<<"\n| Write a program To implement parser       |";
    cout<<"\n|-------------------------------------------|"<<endl;

    string test_cases[] = {
                            "abBCc",
                            "abBCcC",
                            "abABCc",
                            "abABCcC",
                            "abABcCc",
                            "abc"
                          };

    for (int i = 0; i < 6; i++) 
    {
        string test_case = test_cases[i];
        cout << test_case << ": " << parse(test_case) << endl;
    }
    return 0;
}