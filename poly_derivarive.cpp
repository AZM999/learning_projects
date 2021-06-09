// trying to make a calculator for differentiating polynomials
//code version 1.0
//AZM
/* algo--

    1. take input as string 
    2. search for + , - , ^ 
    3. arrange the terms and segregate
    4. apply formula
    5. show result

    ----------basic structure----------
    1. function for segregating the terms - segregate()
    2. function for derivative formula - diff()
    3. class for storing the polynomial
        - variables for each power ( at first i am trying to make it only for "asked" degree)
        - function show()
        - 
    4. I always forget to  put cin.ignore() after cin.getline();
*/

#include<string.h>
#include<iostream>
using namespace std;

struct poly
{
    float coeff;
    int pow;
    void show()
    {
        cout<<coeff<<"X^"<<pow;
    }
}p4,p3,p2,p1;
// function declaration
void derivative (string poly_in)
{
	const char s[4] = "+-";
	char* tok;

	//tok = strtok(poly_in,s);
	while (tok != 0) 
    {
		
        //void create_poly(tok,deg)
		cout<<tok<<"\n";
		tok = strtok(0, s);
	}

}


int main()
{
    string poly_in;
    cout<<" enter the polynomial with X and use ^ for its power ";
    cout<<" \n dont use space in between and be carefull ";
    cout<<"\n enter the polynomial function = ";
    cin>>poly_in,50;
    cout<<" the entered string is = "<<poly_in;
    //call segregate function here
    derivative(poly_in);

    return 0;


}