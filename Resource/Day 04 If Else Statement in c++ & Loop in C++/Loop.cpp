#include <iostream>
using namespace std;

// Printing Coder Army in Loops

int main() {
     for (int i=1; i<=5; i++){
        cout<<"Coder Army"<<endl;
     }
}


// Printing the Loop of Input Value

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;

    for (int i=1; i<=n; i++) {
        cout<<i<<endl;
    }
}


// Printing the Square Loop of Input Value

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;

    for (int i=1; i<=n; i++) {
        cout<<"Square is : "<<i*i<<endl;
    }
}



// Print the N even number

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for (int i = 1; i<=n; i++) {
        if (i%2==0) {
            cout<<"Even Number is : "<<i<<endl;
        }
    }
}

