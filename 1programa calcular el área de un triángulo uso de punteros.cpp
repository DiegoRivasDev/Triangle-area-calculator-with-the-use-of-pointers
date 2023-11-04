
//	cout<<"";
//	cin>>"";
//  cout<<"\n";
//  {}

#include <iostream>
#include <conio.h>

using namespace std;

	int variableA, variableB, *resultado;
    
int main()
{
    cout<<"cual va a ser el valor de la altura ";
    
    cin>>variableA;
    
	cout<<"cual va a ser el valor de la base del triangulo ";
    
	cin>>variableB;
	
    int area = (variableA*variableB)/2;
    
    resultado=&area;
    
    cout<<"\n";
    
    cout<<"el area del triangulo es "<<*resultado;

    return 0;
}
