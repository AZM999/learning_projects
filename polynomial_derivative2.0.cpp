// trying to make a calculator for differentiating polynomials( for algo check bottom )
//code version 2.0
//AZM

/*
        -----version 2.0 updates
        1. used sign wise term both + and -
        2. added moving digits for immersive experience
*/


#include "string.h"
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <ctime>
#include <stdlib.h>
using namespace std;

BOOL gotoxy(const WORD x, const WORD y) 
{
    COORD xy;
    xy.X = x;
    xy.Y = y;
    return SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), xy);
}


void finderivative( string str)
{
    int pos = str.find("x");

    if( pos == -1)
    {
        cout<<" 0 ";
    }
    else
    {
        string coeff = str.substr(0,pos);
        stringstream s(coeff);
        int coef=1;
        s >> coef;
        
        pos = str.find("^");
        int pows = 0;

        if ( pos == -1)
        {
            pows = 1;
        }
        else
        {
            
            string pow = str.substr(pos+1,(str.length()-pos-1));
            stringstream p(pow);
            p >> pows;
        
        }
            if( coef == 0)
            {
                cout<<"0";
            }
            else 
            if(pows == 1)
            {
                
                cout<<coef;
            }
            else
            {
                coef *= pows ;
                pows = pows - 1;

                cout<<coef<<"x^"<<pows;
            }
        
        
        
    }


}

int main()
{
    string poly,sign ;
    cout<<"DERIVATIVE CALCULATOR FOR POLYNOMIAL FUNCTION ";
    cout<<"\nenter the polynomial with x and use ^ for its power like ( 3x^2 + 5x + 9 ONLY ) ";
    cout<<" \nuse space in between and be carefull ";
    cout<<"\n ENTER FUNCTION f(n)= ";
    getline(cin,poly);

    srand(time(0));
   for (int i=0;i<50;i++)
   {
       
       gotoxy(20,20);
        system("cls");
       cout<<rand()%100<<" %";
    }


    system("cls");

    cout<<"\n\t derivative of polynomial \n\nf(n) = "<<poly<<" is f'(n) = ";

    
    stringstream s(poly);
    string word;

    while(s>>word)
    {
        
        if ( word == "+" || word == "-")
        {
            sign = word ;
            cout<<" "<<sign<<" ";
            sign.clear();
            continue;
        }
        else
        {
            finderivative(word);
            
        }

    }
    return 0;
}


/* algo--

    1. take input as string 
    2. search for + , -
    3. seperate terms 
    4. give seperated term into function to calculate derivative
    5. show result

    next do these things and upgrade the polynomial term storage
    for 2.0
    ----------basic structure----------
    1. function for derivative
    2. function for derivative formula - diff()
    3. class for storing the polynomial
        - variables for each power ( at first i am trying to make it only for "asked" degree)
        - function show()
        - 
    4. I always forget to  put cin.ignore() after cin.getline();
*/