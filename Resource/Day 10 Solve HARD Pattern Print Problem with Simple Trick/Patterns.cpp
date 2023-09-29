#include <iostream>
using namespace std;

// Printing the reverse star pattern

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        // space print
        for(int j=1;j<=n-i;j++)
        cout<<" ";
        // star print
        for (int j=1;j<=i;j++){
            cout<<"*";
        }cout<<endl;
    }
}


// Printing the reverse number pattern

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        // print space
        for(int j=1;j<=n-i;j++)
        cout<<" ";
        // print number
        for (int j=1; j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}


// // Printing the reverse number pattern

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        // print space
        for(int j=1;j<=n-i;j++)
        cout<<" ";
        // print number
        int num = 1;
        for (int j=1; j<=i;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
}


// Printing the reverse character pattern

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        // print space
        for(int j=1;j<=n-i;j++)
        cout<<" ";
        // print character
        char ch = 'A';
        for (int j=1; j<=i;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}

