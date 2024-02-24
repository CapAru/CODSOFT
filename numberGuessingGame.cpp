#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1;
    cout<<"Guess the number between 1 to 100:\n";
    while (true){
        cin>>guess;
        if(guess>number+30){
            cout<<"Your guess is too high!\n";
        }
        else if(guess<number-30){
            cout<<"Your guess is too low!\n";
        }
        else if(guess>number+10){
            cout<<"Your guess is close but high!\n";
        }
        else if(guess<number-10){
            cout<<"Your guess is close but low!\n";
        }
        else if(guess>number){
            cout<<"Your guess is very close but high!\n";
        }
        else if(guess<number){
            cout<<"Your guess is very close but low!\n";
        }
        else if(guess==number){
            cout<<"You guessed it in "<<nguesses<<" guesses!\n";
            break;
        }
        nguesses++;
        if(nguesses>10){
            cout<<"You have exceeded the number of guesses!\n";
            break;
        }
    }
}