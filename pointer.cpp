#include<iostream>
using namespace std;
int main()
{
    int *p;
    int arr[4];
    cout<<"enter a element";
    for(int i=0;i<=4;i++)
    cin>>arr[i];
    p=arr;
    cout<<"you entered: ";
    for(int i=0;i<=4;i++){
        cout<<*p<<endl;
        p++;
    }
    return 0;
}
