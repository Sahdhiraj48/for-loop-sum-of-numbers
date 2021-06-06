#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"Enter the number\n";
    cin>>n;
    cout<<"numbers\t"<<"sum"<<endl;
    for(int counter=1;counter<=n;counter++)
    {
        sum=sum+counter;
        cout<<counter<<"\t";
        cout<<sum<<endl;


    }
    cout<<"the sum of numbers is \t"<<sum;
    return 0; 
}