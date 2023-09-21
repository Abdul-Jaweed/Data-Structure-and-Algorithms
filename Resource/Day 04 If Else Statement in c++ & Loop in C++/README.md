## Coding Assignment


### if-else

**1. Two numbers are given, print the bigger number, It is given that both numbers can’t be the same**

```cpp
#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the First Value : ";
    int a, b;
    cin>>a;
    cout<<"Enter the Second Value : ";
    cin>>b;
    if(a>b)
    cout<<a;
    else
    cout<<b;
}

```



**2. Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager**

```cpp
#include <iostream>
using namespace std;

int main() {
    cout<<"Enter your age : ";
    int n;
    cin>>n;
    if(n>18)
    cout<<"Adult";
    else
    cout<<"Teenager";
}

```


**3. Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13**

```cpp
#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        cout<<"January";
        break;
    case 2:
        cout<<"Feburary ";
        break;
    case 3:
        cout<<"March";
        break;
    case 4:
        cout<<"April";
        break;
    case 5:
        cout<<"May";
        break;
    case 6:
        cout<<"June";
        break;
    case 7:
        cout<<"July";
        break;
    case 8:
        cout<<"August";
        break;
    case 9:
        cout<<"September";
        break;
    case 10:
        cout<<"October";
        break;
    case 11:
        cout<<"November";
        break;
    case 12:
        cout<<"December";
        break;
    
    default:
        cout<<"Enter the Number in range (1 to 12)";
        break;
    }
}
```


**4. Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”**

```cpp
#include <iostream>
using namespace std;

int main() {
    cout<<"Enter your Age for Ticket Price Calculator : ";
    int n;
    cin>>n;
    if(n<12 || n>65)
    cout<<"YES";
    else
    cout<<"NO";
}
```


### For Loop

**1. Print “India will win the World Cup 2023”, 20 times.**

```cpp
#include <iostream>
using namespace std;

int main() {
    for(int i=1; i<=20; i++){
        cout<<"India will win the World Cup 2023"<<endl;
    }
}
```




**2. Print all Odd numbers from 1 to n, take n as an input from the user.**

```cpp
#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for (int i = 1; i<=n; i++) {
        if (i%2!=0) {
            cout<<"Odd Number is : "<<i<<endl;
        }
    }
}
```



**3. Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.**

```cpp
#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for (int i = 1; i<=n; i++) {
        if (i%4==0) {
            cout<<"Divisible by 4 : "<<i<<endl;
        }
    }
}
```