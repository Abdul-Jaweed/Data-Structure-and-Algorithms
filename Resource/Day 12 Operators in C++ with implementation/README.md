## Assignment


**1. Temperature Range: Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO.**

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Enter the temperature in Fahrenheit : ";
    int n;
    cin>>n;

    if (n > 70 && n < 90) {
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }
}

```



**2. Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.**

```cpp
#include <iostream>
using namespace std;

int main() {
    
    cout << "Enter the Number : ";
    int n;
    cin>>n;
    if (n > 0 && n % 2 == 0) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}
```




**3. Age Check: Implement a program that checks if a person is a teenager. A teenager is someone whose age is between 13 and 19 (inclusive).**


```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Enter your age : ";
    int n;
    cin >>n;
    if (n >= 13 && n <= 19) {
        cout<<"You are a teenager.";
    } else {
        cout<<"You are not a teenager.";
    }
}
```




**4. Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout<<"Enter the Three Numbers : "<<endl;
    cin>>a>>b>>c;

    if (a > b || a > c) {
        cout << "YES";
    } else {
        cout<<"NO";
    }
}
```

