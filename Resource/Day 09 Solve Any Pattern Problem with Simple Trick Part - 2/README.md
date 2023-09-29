## Assignment

**1. Printing the Number Pattern**

```cpp
int main() {
    cout<<"Enter the Number : ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
```

**2. Printing the Character Pattern**

```cpp
int main() {
    for (int i=1;i<=5;i++) {
        char name = 'A';
        for (int j=1; j<=i; j++) {
            cout<<name<<" ";
            name++;
        }
        cout<<endl;
    }
}
```

**3. Printing the 10th to 15th Number Pattern**

```cpp
int main() {
    for(int i=10;i<=15;i++) {
        for(int j=10;j<=i;j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
```

**4. Printing the Reverse Character Pattern**

```cpp
int main() {
    for (int i=4;i>=1;i--) {
        char name = 'A';
        for (int j=1; j<=i; j++) {
            cout<<name<<" ";
            name++;
        }
        cout<<endl;
    }
}
```