#include <iostream>
using namespace std;

// Printing 101 to 200 using for Loop

int main() {
    for (int i=101; i<=200;i++){
        cout<<i<<endl;
    }
}


// Printing a to z using for Loop

int main() {
    char name;
    for(name='a'; name<='z'; name++){
        cout<<name<<" ";
    }
}


// Printing 10 to 1 using for Loop

int main() {
    cout<<"Enter the number : ";
    int n,i;
    cin>>n;
    for(i=n;i>=1;i--){
        cout<<i<<endl;
    }
}


// Printing 1 to 100 with 3 jump using for loop

int main() {

    for(int i=1;i<=100;i+=3){
        cout<<i<<endl;
    }
}


// Printing AP Series

int main() {
    cout<<"Enter the Table number : ";
    int n;
    cin>>n;
    for(int i; i<=10;i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
}


// Print the power of number

int main() {
    int n,p,i,num;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Enter the power number : ";
    cin>>p;
    num=n;
    for(i=1;i<p;i++) {
        num=num*n;
    }
    cout<<num;
}


// Sum of n natural number

int main() {
    cout<<"Enter the Number : ";
    int n,sum,i;
    cin>>n;
    sum=0;
    for (i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum;
}


// Sum of n natural number {Second way}

int main() {
    cout<<"Enter the Number : ";
    int n,sum,i;
    cin>>n;
    sum=0;
    cout<<(n*(n+1))/2;
}


// Printing the Factorial

int main() {
    cout<<"Enter the Factorial Number : ";
    int n, fac, i;
    cin>>n;
    fac=1;
    for (i=1;i<=n;i++){
        fac=fac*i;
    }
    cout<<fac;
}


// Printing the Prime Number 

int main() {
    int n,i;
    cout<<"Enter the Number : ";
    cin>>n;
    if(n<2){
        cout<<"Not a Prime Number!";
        return 0;
    } else {
        for(i=2;i<n;i++) {
            if(n%i==0){
                cout<<"Not a Prime Number!";
                return 0;
            }
        }
    }
    cout<<"Its a Prime Number : "<<n;
    return 0;
}


// Printing the Factorial

int main() {
    int n,i, last,prev,curr;
    cout<<"Enter the Number : ";
    cin>>n;
}

