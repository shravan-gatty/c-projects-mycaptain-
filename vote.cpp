#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"\n enter your age:";
    cin>>age;

    if(age>=13 && age<=20)
	{
		cout<<"you  are Teenager"<<endl;
	}
	else
	{
		cout<<"you are not a Teenager"<<endl;
	}

    if(age>=18)
    {
        cout<<"\n you are eligible for voting";

    }
    else{
        cout<<"\n you are kid not eligible for voting";
    }
    return 0;
}
