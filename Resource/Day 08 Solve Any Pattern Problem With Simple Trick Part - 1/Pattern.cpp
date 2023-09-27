#include <iostream>
using namespace std;

// Printing the Star Pattern 

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for (int i =1; i<=n; i++) {
        for (int j = 1; j<=n;j++) {
            cout<<"+ "<<" ";
        }
        cout<<endl;
    }
}


// Printing the 10th Number Pattern

int main() {
    cout<<"Enter the First Number : ";
    int n;
    cin>>n;
    cout<<"Enter the Second Number : ";
    int m;
    cin>>m;
    for (int i =1; i<=n; i++) {
        for (int j = 1; j<=m;j++) {
            cout<<"10 "<<" ";
        }
        cout<<endl;
    }
}


// Printing the Number Pattern

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cout<<i<<" ";
        } cout<<endl;
    }
}


// Printing the 1 to 5 Pattern

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cout<<j<<" ";
        } cout<<endl;
    }
}


// Printing the 1 to 5 Reverse Pattern

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for (int i=1; i<=n; i++){
        for (int j=n; j>=1; j--){
            cout<<j<<" ";
        } cout<<endl;
    }
}


// Print the Character Pattern

int main() {

    for (int i=1; i<=5; i++) {
        char name = 'a'+i-1;
        for (int j=1; j<=5; j++) {
            cout<<name<<" ";
        }
        cout<<endl;
    }
}


// Print the Character Pattern

int main(){
    for (int i=1; i<=5; i++){
        for (char j='a'; j<='e';j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

// Print the Character Pattern (second way)


int main(){
    for (int i=1; i<=5; i++){
        for (int j=1; j<=5;j++) {
            char ch = 'a'+j-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}


// // Printing the count Pattern

int main() {
    int count = 1;
    for(int i=1; i<=5; i++) {
        for (int j=1; j<=5;j++) {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}


