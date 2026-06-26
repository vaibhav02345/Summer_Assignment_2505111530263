#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(time(0));
    int number=rand()%100+1;
    int guess;
    do
    {
        cout<<"Enter your guess(1-100): ";
        cin>>guess;
        if(guess<number)
            cout<<"Too Low";
        else if(guess>number)
            cout<<"Too High";
        else
            cout<<"Correct! You guessed the number";

    }while(guess!=number);

    return 0;
}