## Assignment

**1. Print number from 280 to 250 with the help of for loop**

```cpp
int main() {
    for (int i=280; i>=250; i--) {
        cout<<i<<" ";
    }
}
```


**2. Print char from ‘A’ to ‘Z’ with the help of a for loop**

```cpp
int main() {
    char c;
    for(c='A'; c<='Z';c++){
        cout<<c<<" ";
    }
}
```


**3. Print char from ‘Z’ to ‘A’ with the help of a for loop**

```cpp
int main() {
    char c;
    for(c='Z'; c>='A';c--){
        cout<<c<<" ";
    }
}
```


**4. There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP**

```cpp
int main() {
    for (int i=220;i<=730;i=i+7) {
        cout<<i<<" ";
    }
}
```



**5. Print Sum of square of first n natural number.**

```cpp
int main() {
    cout<<"Enter the Number : ";
    int n,square,i;
    cin>>n;
    square=0;
    for (i=1;i<=n;i++){
        square=square+i*i;
    }
    cout<<square;
}
```


**6. Print Sum of cube of first n natural number**

```cpp
int main() {
    cout<<"Enter the Number : ";
    int n,cube,i;
    cin>>n;
    cube=0;
    for (i=1;i<=n;i++){
        cube+=i*i*i;
    }
    cout<<cube;
}
```


**7. Print n’th Fibonacci number.**

```cpp
int main() {
    int n, prev = 0, curr = 1, sum = 0;
    cout << "Enter the Number : ";
    cin >> n;
    if (n <= 0) {
        cout << "Enter a number greater than 0.";
    } else if (n == 1) {
        cout << "The " << n << "st Fibonacci number is: " << prev;
    } else if (n == 2) {
        cout << "The " << n << "nd Fibonacci number is: " << curr;
    } else {
        for (int i = 3; i <= n; i++) {
            sum = prev + curr;
            prev = curr;
            curr = sum;
        }
        cout << "The " << n << "th Fibonacci number is: " << sum;
    }
    return 0;
}
```