#include<iostream>
#include <cstdlib> // -------. for the random num generator will use its methods like rand(),srand()
#include<ctime> // for time
using namespace std;

int main(){
   
//Comment the srand(time(0)) line and u'll get it

srand(time(0));//   srand() is used to seed the randomnumber generator so it can give different sequence of numbers each time and the reason wee used the time(0) is because( time(0) returns the current time)
// what is seed? ---> initial value used to start the number generation
// cout<<time(0); ---> will print the number of seconds from 1970

// Generate a random number between 1 to 100 
int RandomNumber= rand()%100 +1;
int UserGuess;
int count=1;
// cout<<RandomNumber<<endl;
cout<<"\nI have chosen a number ! (1 - 100 )\n";
cout<<"Give your guessed ? ";
do
{
cout<<"Enter your Guess : ";
cin>>UserGuess;
if (UserGuess<RandomNumber)
{
cout<<"Too low try again \n";
cout<<"Attempt no . : "<<count<<endl<<endl;
count++;
}
else if (UserGuess>RandomNumber)
{
cout<<"Too high try again\n";
cout<<"Attempt no . : "<<count<<endl<<endl;
count++;
}
else
{
cout<<"Congratulatoins you guessed it completly !!!\n";
cout<<"No. of Attempts you done : "<<count;
}


    
} while (UserGuess!=RandomNumber);

return 0;
}