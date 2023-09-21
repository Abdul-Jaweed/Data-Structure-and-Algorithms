#include<iostream>
using namespace std;

int main() {
    cout<<"Enter your first Number : ";
    int a,b;
    cin >>a;
    cout<<"Enter your Second Number : ";
    cin >>b;
    cout<<"Sum of two number is : "<<a+b<<endl;


    Type casting 
    int a = 10;
    char c = 'p';
    a = c;
    cout<<a<<endl;

}

// If Else Statement

int main() {
    cout<<"Enter the Package in Decimal Values : ";
    int package;
    cin>>package;
    if (package>10) {
        cout<<"Accepted!";
    } else {
        cout<<"Rejected";
    }
}


int main() {
    cout<<"Enter your marks : ";
    int score;
    cin>>score;
    if (score>33) {
        cout<<"Congratulation youre pass!";
    } else {
        cout<<"Fail";
    }
}


int main() {
    cout<<"Enter the A value : ";
    int a, b;
    cin>>a;
    cout<<"Enter the B value : ";
    cin>>b;
    if(a>b)
    cout<<"A is greater than B";
    else
    cout<<"B is greater than A";
}


int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    if (n%2==0)
    cout<<"Even Number";
    else
    cout<<"Odd Number";
}


// If else and else if Statement

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    if (n>0){
        cout<<"Positive Number";
    } else if(n==0){
        cout<<"Zero Number";
    } else{
        cout<<"Negative Number";
    }
}


// Print Vowel or Consonant

int main() {
    cout << "Enter a single character: ";
    char c;
    cin >> c;

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    cout << "Vowel" << endl;
    else
    cout << "Consonant" << endl;
}


// Printing Week Day

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednessday";
        break;
    case 4:
        cout<<"Thursday";
        break;
    case 5:
        cout<<"Friday";
        break;
    case 6:
        cout<<"Saturday";
        break;
    case 7:
        cout<<"Sunday";
        break;
    
    default:
        cout<<"Enter the Number in range (1 to 7)";
        break;
    }
}