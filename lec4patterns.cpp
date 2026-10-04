 #include <iostream>
 using namespace std;
 int main(){


 /*1. int main(){ 
 int n;
 cin>>n;
 int i=1;
 while (i<=n){
    int j=1;
    while(j<=n){
        cout<<n-j+1;
        j=j+1;
    }
    cout<<endl;
    i = i+1;
 }*/


/*2. int n;
cin >> n;
int i=1; 
int count =1;
while(i<=n){

    int j=1;
while(j<=n){
    cout << count << " ";
    count = count +1;
    j= j+1;
}
cout << endl;
i = i+1;
}*/


/*  3. int n;
cin>>n;
int row = 1;
while(row <= n){
int col =1;
while (col<=row) {
    cout<< "*";
    col = col +1;
}
cout << endl;
row = row +1;
 }*/

/* 4. int n;
cin>>n;
int row = 1;
while(row <= n){
int col =1;
while (col<=row) {
    cout<< row;
    col = col +1;
}
cout << endl;
row = row +1;
 }*/

/*  5. int n;
cin>>n;
int row =1;
while(row<=n){
    int col=1;
    int value = row;
    while(col<=row){
        cout << value;
        value = value +1;
        col = col +1;
    }
    cout << endl;
    row = row +1;
}*/

/* 6. int n;
cin>>n;
int i  = 1;
while(i <= n){
int j =1;
while (j<=i) {
    cout<< (i-j+1) << " ";
    j = j +1;
}
cout << endl;
i = i +1;
 }*/

/*7. int n;
cin>>n;
int row = 1;
while(row <= n){
int col =1;
while (col<=n) {
    char ch = 'A' + row -1;
    cout<< ch;
    col = col +1;
}
cout << endl;
row = row +1;
 }*/

 // 'A'+ j-1  or check karo karke. (h.w)

 // abc ke lie check karo start variable bana ke fir start= start +1 kardo.

/* 8. int n;
cin>>n;
int row = 1;
while(row <= n){
int col =1;
while (col<=row) {
    char ch = ('A'+ row -1);
    cout << ch;
    col = col +1;
}
cout << endl;
row = row +1;
}*/


/* 9. int n;
cin>>n;
int row = 1;
while(row <= n){
int col =1;
while (col<=row) {
    char ch = ('A'+ row + col -2);
    cout << ch;
    col = col +1;
}
cout << endl;
row = row +1;
}*/


/*  10. int n;
cin>>n;
int row = 1;
while(row <= n){
int col =1;
char start = 'A'+ n - row ;
while(col<=row) {
    cout << start;
    start = start+1;
    col = col +1;
}
cout << endl;
row = row +1;
}*/

/*  11. int n;
cin>>n;
int row = 1;
while(row <= n){
    //space print karlo
    int space = n - row;
    while(space){
        cout <<" ";
        space = space -1;
    }
    // stars print karlo
int col =1;
while(col<=row) {
    cout << '*';
    col = col + 1;
}
cout << endl;
row = row +1;
}*/

/*int n;
cin>>n;
int row = 1;
while(row <= n){
    //space print karlo
    int space = n - row;
    while(space){
        cout <<" ";
        space = space -1;
    }

    //print 2nd triangle
      int j =1;
      while(j<=row){
        cout<<j;
        j = j+1;
      }
    // print 3rd triagle
cout << endl;
row = row +1;
    }*/

int n;
cin>>n;
int row = 1;
while(row <= n){
    //space print karlo
    int space = n - row;
    while(space){
        cout <<" ";
        space = space -1;
    }

    //print 2nd triangle
      int j =1;
      while(j<=row){
        cout<<j;
        j = j+1;
      }
    // print 3rd triagle
    int start = row -1;
    while(start){
cout << start;
start = start -1;
}
cout << endl;
row = row +1;
} 
return 0;
 }