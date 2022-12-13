/*
Write a program that plays the popular scissor, rock, paper game. (A scissor can cut a paper, a rock can knock a scissor, and a paper can wrap a rock). The program randomly generates a number 0, 1, or 2 representing scissor, rock, or paper. The program prompts the user to enter a number 0, 1, or 2 and displays a message indicating whether the user or the computer wins, loses, or draws. 
https://liveexample.pearsoncmg.com/liang/cpp3e/html/GuessNumber.html
*/
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

string weapons[3] = {"scissor", "rock", "paper"};

int main()
{
    srand(time(NULL));

    int computer, yours;
    computer = rand()%3;

    cout<<"scissor (0), rock (1), paper (2): ";
    cin>>yours;

    if (computer == yours)
    {
        cout<<"Computer is "<<weapons[computer]<<". You are "<< weapons[yours]<<". You draw." <<endl;
    }else if (computer-yours==1 || computer-yours==-2)
    {
       cout<<"Computer is "<<weapons[computer]<<". You are "<< weapons[yours]<<". You lose." <<endl;
    }else
    {
        cout<<"Computer is "<<weapons[computer]<<". You are "<< weapons[yours]<<". You win." <<endl;
    }  
}