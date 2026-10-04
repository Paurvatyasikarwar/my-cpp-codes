#include <iostream>
using namespace std;
int main (){
    /*int a;
    cin >> a;
    if (a>0){
        cout<< "A is positive"<< endl;
    }
    else{
        cout << "A is negative"<< endl;
    }
int a,b;
cin>> a >> b;
cout << "value of a and b is " <<a << " ," << b << endl;

int a,b;
cout << "enter the value of a " << endl;
cin >> a;

cout << "enter the value of b" << endl;
cin>> b;

if (a>b) {
    cout << "A is greater" << endl;
}

if (b>a){
    cout << "B is greater"<< endl;
} 
 
int a ;
cout <<" enter the value of a"<< endl;
cin>>a;

if (a>0){
    cout << "A is positive"<< endl;
}
else if (a<0){
    cout << "A is negative"<< endl;
}
else{
    cout << "A is 0"<< endl;
}
int n;
cin>>n;

int i = 1;
int sum = 0;

while(i<=n){
    sum = sum + i;
    i = i+1;
}
cout << "value of sum is" << " " << sum << endl;
} */
int n;
cin>> n;

int i = 2;
while (i<n){
    if (n%i==0){
        cout << "Not prime for "<< i << endl;
    }
    else{
        cout <<"prime for " << i << endl;
    }
    i = i+1;
}
}