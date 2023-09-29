## Assignment

**1. First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.**

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Enter the Number: ";
    int n;
    cin >> n;
    for (int i=1;i<=n;i++) {
        // print space
        for (int j=1;j<=n-i;j++)
            cout<<" ";
        // print number
        for (int j=i;j>=1;j--) {
            cout<<j;
        }
        cout<<endl;
    }
}
```

**2. Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.**

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Enter the Number of Rows: ";
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        // print spaces
        for (int j = 1; j <= n - i; j++)
            cout << "  ";
        // print characters
        char ch = 'A' + i - 1;
        for (int j = 1; j <= i; j++) {
            cout << ch;
            if (j < i) {
                cout << " ";
            }
        }
        cout << endl;
    }
}
```

**3. Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.**

```cpp
#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        // print space
        for(int j=1;j<=n-i;j++)
        cout<<" ";
        // print number
        int num = n;
        for (int j=1; j<=i;j++){
            cout<<num;
            num--;
        }
        cout<<endl;
    }
}
```

**4. Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.**

```cpp
#include <iostream>
using namespace std;

int main() {
    for(int i=1;i<=5;i++) {
        // print space
        for(int j=1;j<=5-i;j++)
        cout<<" ";
        // print character
        char num = 'E';
        for (int j=1; j<=i;j++){
            cout<<num;
            num--;
        }
        cout<<endl;
    }
}
```