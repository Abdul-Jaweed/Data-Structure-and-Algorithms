## Assignment

**1. Print the 4th Number Pattern**

```cpp
#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cout<<"4"<<" ";
        }
        cout<<endl;
    }
}
```

**2. Printing the N Square Pattern**

```cpp
#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cout<<j*j<<" ";
        }
        cout<<endl;
    }
}

```

**3. Printing the N Cube Pattern**

```cpp
#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for (int i=1; i<=n; i++) {
        for (int j=1;j<=n;j++) {
            cout<<j*j*j<<" ";
        }
        cout<<endl;
    }
}
```

**4. Printing the Character Pattern**

```cpp
#include <iostream>
using namespace std;

int main(){
    for (int i=1; i<=5; i++){
        for (char j='F'; j<='K';j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
```