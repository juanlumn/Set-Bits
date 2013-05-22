#include <iostream>

using namespace std;

int sumnumber(int number){
    int sum=0;
    if (number>0){
        while (number!=0){
            if (number%2)sum++;
            number=number/2;
        }
    }
    return (sum);
}

int main(void)
{
    while(1){
        int number;
        //Ask for the positive integer
        cout<<"Please insert a positive integer: ";cin>>number;
        int sum=sumnumber(number);
        if (sum>0)cout<<" "<<sum<<endl;
        else cout<<"Not a valid number."<<endl;
    }
    return(0);
}
