#include <iostream>
using namespace std;


// Printing Star Piramid Pattern

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        for (int j=1;j<=n-i;j++)
        cout<<" ";
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


// Printing Palindrom Pattern

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) {
        // Space Print
        for (int j=1;j<=n-i;j++) {
            cout<<" ";
        }
        // 1 to i
        for (int j=1;j<=i;j++) {
            cout<<j<<" ";
        }
        // i-1 to 1
        for (int j=i-1;j>=1;j--) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


// Printing the Reversed Star Pattern

int main() {
    cout<<"Enter the Number : ";
    int i,j,n;
    cin>>n;
    for(i=n;i>=1;i--){
        // space
        for(j=1;j<=n-i;j++)
        cout<<" ";
        // star print
        for(j=1;j<=2*i-1;j++)
        cout<<"*";
        cout<<endl;
    }
}


// Printing the box pattern

int main() {
    cout<<"Enter the Number : ";
    int i,j,n;
    cin>>n;
    for(i=n;i>=1;i--) {
        // Print *
        for (j=1;j<=i;j++)
        cout<<"*";
        // Print Space
        for(j=1;j<=2*n-2*i;j++)
        cout<<" ";
        // Print *
        for (j=1;j<=i;j++)
        cout<<"*";

        cout<<endl;
    }

    for(i=i;i<=n;i++) {
        // Print *
        for (j=1;j<=i;j++)
        cout<<"*";
        // Print Space
        for(j=1;j<=2*n-2*i;j++)
        cout<<" ";
        // Print *
        for (j=1;j<=i;j++)
        cout<<"*";

        cout<<endl;
    }

}


// Printing Butter fly pattern


int main() {
    cout<<"Enter the Number : ";
    int i,j,n;
    cin>>n;

    for(i=i;i<=n;i++) {
        // Print *
        for (j=1;j<=i;j++)
        cout<<"*";
        // Print Space
        for(j=1;j<=2*n-2*i;j++)
        cout<<" ";
        // Print *
        for (j=1;j<=i;j++)
        cout<<"*";

        cout<<endl;
    }

    for(i=n-1;i>=1;i--) {
        // Print *
        for (j=1;j<=i;j++)
        cout<<"*";
        // Print Space
        for(j=1;j<=2*n-2*i;j++)
        cout<<" ";
        // Print *
        for (j=1;j<=i;j++)
        cout<<"*";

        cout<<endl;
    }
}

