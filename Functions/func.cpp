#include<iostream>
using namespace std;

void printscreen(){
    cout<<"Heartfelt hello to TANU!!!! :)"<<endl;
}

int sum(int a, int b){
    int c = a + b;
    cout<<"The sum of the numbers are: "<<c<<endl;
    return c;
}

int factorial(int fact){
    for(int i=1;i<=fact;i++){
        fact = fact*i;
    }
    cout<<"The factorial of the number is: "<<fact<<endl;
    return fact;
}

int main(){

    printscreen();
    int a=0,b=0,fact = 0;

    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    sum(a,b);
    cout<<"Enter the number you want to find the factorial of: ";
    cin>>fact;
    factorial(fact);


    return 0;

}

