//Jameson White
#include  <string>
#include<iostream>
using namespace std;

int main()
{
        //declare variables here
        int Descion1=0;
        int Descion2=0;
        int BiggestNumber= 0;

        std::cout<<"Please enter a whole number:\n";
        cin>> Descion1;
        //get first input using std::cin>>

        std::cout<<"Please enter another whole number:\n";
        cin>> Descion2;
        //get second input using std::cin>> again with a second variable

        //determine if first or second is bigger and store that in a third variable
        if( Descion1<Descion2 )
        {
          BiggestNumber=Descion2;
        }
        else 
        
        BiggestNumber=Descion1;
                std::cout<<"Of those two numbers, the biggest is: "<< BiggestNumber;
               
                //print out the variable representing the biggest number

                std::cout<<std::endl<<"Thank you for playing.\n";

                return 0;
}
