## Assignment

**1.Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.**

```cpp
#include <iostream>
using namespace std;

int main() {
    int n,i=1;
    cout<<"Enter the Number : ";
    cin>>n;
    cout<<"While loop";
    while(i<=n) {
        if (i%2==0) {
            cout << i <<endl;
        }
        i++;
    }
    cout<<endl;
    i=1;
    cout<<"do-While loop : ";
    do {
        if (i%2==0) {
            cout<<i<<endl;
        }
        i++;
    } while (i<=n);
}
```


**2. Find the factorial of a number n using a while loop and do a while loop.**

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, fac=1;
    cout<<"Enter the Number : ";
    cin>>n;
    int i=1;
    while (i<=n) {
        fac*=i;
        i++;
    }
    cout<<"While loop : "<<fac<<endl;
    fac=1;
    i=1;
    do {
        fac*=i;
        i++;
    } while (i<=n);
    cout<<"do-while loop: "<<fac<<endl;
}

```

**3. Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).**

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int i = 1;
    do {
        if (i%3==0 && i%5==0) {
            i++;
            continue;
        }
        cout<<i<<endl;
        i++;
    } while (i<=n);
}
```

**4. Given a number n, print the corresponding month of it. For n=1, print Jan, n=2, print Feb…, if the user puts any invalid number, don’t do anything. (Use switch here)**

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    switch (n) {
        case 1:
            cout<<"Jan";
            break;
        case 2:
            cout<<"Feb";
            break;
        case 3:
            cout<<"Mar";
            break;
        case 4:
            cout<<"Apr";
            break;
        case 5:
            cout<<"May";
            break;
        case 6:
            cout<<"Jun";
            break;
        case 7:
            cout<<"Jul";
            break;
        case 8:
            cout<<"Aug";
            break;
        case 9:
            cout<<"Sep";
            break;
        case 10:
            cout<<"Oct";
            break;
        case 11:
            cout<<"Nov";
            break;
        case 12:
            cout<<"Dec";
            break;
        default:
            break;
    }
}

```

**5. Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.**

```cpp
#include <iostream>
using namespace std;

int main() {
    char ch='A';
    cout<<"Capital and small letters using while loop : "<<endl;
    while (ch<='Z') {
        cout<<ch<<" ";
        ch++;
    }cout<<endl;
    ch='a';
    while (ch<='z') {
        cout<<ch<<" ";
        ch++;
    }
}
```

**6. Give a number n, find if it is prime or not, use a while loop and break here to solve it.**

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;
    cout<<"Enter the Number: ";
    cin>>n;
    int i=2;
    while (i<=n/2) {
        if (n % i==0) {
            isPrime=false;
            break;
        }
        i++;
    }
    if (isPrime) {
        cout<<n<<" is a prime number.";
    } else {
        cout<<n<<" is not a prime number.";
    }
}
```