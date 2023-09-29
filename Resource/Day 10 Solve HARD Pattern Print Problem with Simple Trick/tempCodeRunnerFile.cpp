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