#include <iostream>
#include <string>
using namespace std;
    string s="TABLEFAN";
    string guess="________";
    int i=0;
void check(char c){
    if(s.find(c)!=string::npos){ //letter found
    guess[s.find(c)]=c;
    s[s.find(c)]='_';
    }
}
void display(){
    cout<<guess<<endl;
}
void hints(int i){
    switch(i){
        case 0: cout<<"inanimate object"<<endl; 
        break;
        case 1: cout<<"used in summers"<<endl;
        break;
        case 2: cout<<"makes the air cooler"<<endl;
        break;
        case 3: cout<<"comes in different sizes"<<endl;
        break;
        default: cout<<"Im selling mine:), price Rs.750 only"<<endl;
    }
}
void play(){
    int j;
    while(guess.find('_')!=string::npos){
        display();
        cout<<"DO YOU WANT A HINT?(enter 0 for no, or 1 for yesT)"<<endl;
        cin>>j;
        if(j==1){hints(i); i++;}
        cout<<"GUESS AN ALPHABET"<<endl;
        char c;
        cin>>c;
        if(c>='a'&&c<='z')
        c-=32;
        check(c);
    }
}
int main(){
    cout<<"WELCOME TO HANGMAN, GUESS THE WORD"<<endl;
    play();
    cout<<"CONGRATULATIONS YOU'VE WON"<<endl;
    cout<<"HIGH SCORE "<<i<<endl;
    return 1;
}