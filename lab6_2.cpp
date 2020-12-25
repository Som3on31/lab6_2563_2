#include <iostream>

using namespace std;


int main(){

    string name,movie,day,line1;
    int ID;

    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n?????: ";
    getline (cin,name);

    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n" << name << ": ";
    cin >> ID;

    cout << "Fahsai: I think you may be GEAR " << (ID/10000000)-12 << ". "; 
    cout << "I have a free movie ticket for you.\nFahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n" << name << ": ";
    cin.ignore();
    getline (cin,movie);
    

    cout << "Fahsai: So....which day are you free to go with me?\n" << name << ": ";
    getline (cin,day);
    
    cout << "Fahsai: "<< day << "....that is OK!!! " << "I'm looking forward to watching " << movie << " with you.\n";
    cout << name << ": ";
    getline (cin,line1);
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/";

    return 0;
}