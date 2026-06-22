#include <iostream>
using namespace std;

void askQuestion(
    string question,
    string op1,
    string op2,
    string op3,
    string op4,
    char correct,
    int &score
)
{
    char ans;

    cout << "\n" << question << endl;

    cout << "A. " << op1 << endl;
    cout << "B. " << op2 << endl;
    cout << "C. " << op3 << endl;
    cout << "D. " << op4 << endl;

    cout << "Enter answer: ";
    cin >> ans;

    if(toupper(ans)==correct){
        cout<<"Correct!\n";
        score++;
    }

    else{
        cout<<"Wrong!\n";
    }
}

int main(){

int score = 0;

cout<<"===== QUIZ APP =====\n";

askQuestion(
"1. What is the capital of India?",
"Mumbai",
"Delhi",
"Chennai",
"Kolkata",
'B',
score
);

askQuestion(
"2. Which language is used in C++?",
"Programming",
"Markup",
"Database",
"Query",
'A',
score
);

askQuestion(
"3. 2 + 2 = ?",
"3",
"5",
"4",
"6",
'C',
score
);

cout<<"\nFinal Score: "
<<score<<"/3"<<endl;

if(score==3)
cout<<"Excellent!";

else if(score>=2)
cout<<"Good Job!";

else
cout<<"Keep Practicing!";

return 0;

}