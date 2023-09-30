## Assignment

**1. First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.**

```cpp
#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        for (int j=1;j<=n-i;j++)
        cout<<" ";
        for(int j=1;j<=i;j++){
            cout<<"* ";
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
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        for (int j=1;j<=n-i;j++)
        cout<<" ";
        int n=1;
        for(int j=1;j<=2*i-1;j++){
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }
}
```

**3. Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.**

```cpp
#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the Number of Rows: ";
    int n;
    cin>>n;
    for (int i=0;i<n;i++) {
        // Print spaces
        for(int j=0;j<n-i-1;j++) {
            cout<<"   ";
        }
        char ch='A';
        for(int j=0;j<=i;j++) {
            cout<<ch<<"  ";
            ch++;
        }
        ch-=2;
        for(int j=0;j<i;j++) {
            cout<<ch<<"  ";
            ch--;
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
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    
    for (int i=1;i<=n;i++) {
        // print spaces
        for (int j=1; j<=n-i;j++)
            cout<<"  ";
        // print stars
        for (int j=1;j<=i;j++) {
            cout<<"*";
            if (j<i) {
                cout<<"  ";
            }
        }
        cout << endl;
    }

    for (int i=n-1;i>=1;i--) {
        // print spaces
        for (int j=1;j<=n-i;j++)
            cout<<"  ";
        // print stars
        for (int j=1;j<=i;j++) {
            cout<<"*";
            if (j<i) {
                cout<< "  ";
            }
        }
        cout<<endl;
    }
}
```