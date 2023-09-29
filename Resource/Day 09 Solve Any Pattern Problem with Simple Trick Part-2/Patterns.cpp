#include <iostream>
using namespace std;

// Printing Star Pattern

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}


// Printing the Number Pattern

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


// Printing the Number Pattern

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}


// Printing Reverse Pattern

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) {
        for (int j=i;j>=1;j--) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


// Printing the character pattern

int main() {
    for (int i=1;i<=5;i++) {
        char name = 'a'+i-1;
        for (int j=1; j<=i; j++) {
            cout<<name<<" ";
        }
        cout<<endl;
    }
}


// Printing the Reversed Star Pattern

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for (int i=n;i>=1;i--) {
        for (int j=1;j<=i;j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}


// Printing the Reversed Star Pattern (Another way)

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for (int i=i;i<=n;i++) {
        for (int j=1;j<=5-(i-1);j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}


// Printing the Reverse Number Pattern

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for (int i=n;i>=1;i--) {
        for (int j=1;j<=i;j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


// Printing the Reverse Number Pattern (Another way)

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for (int i=i;i<=n;i++) {
        for (int j=1;j<=n-(i-1);j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


// Printing the Reverse Number Pattern

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        for(int j=n;j>=n-i+1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
