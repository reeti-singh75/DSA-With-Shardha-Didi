#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter your Number" << endl;
    cin >> num;

    // bool isPrime=true;
    //     for(int i=2;i<num-1;i++){
    //         if(num%i==0){
    //             isPrime=false;
    //             break;
    //         }
    //     }

    //     if(isPrime==true){
    //         cout<<"Prime Number  \n";
    //     }else{
    //         cout <<"None Prime Number  \n";
    //     }

    // koi bhi prime number ko check karne ke liye
    // hame bas  vargmool tak bhi divide  dekhar check karne ko jarurat hoti hai

    bool isPrime = true;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
    {
        cout << "Prime Number  \n";
    }
    else
    {
        cout << "None Prime Number  \n";
    }

    return 0;
}