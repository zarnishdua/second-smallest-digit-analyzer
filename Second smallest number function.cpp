#include<iostream>
using namespace std;
int second_smallest(int n){
 int smallest=10;
int  second_small=10;
int lastdigit;
 while(n>0){
lastdigit=n%10;
if(smallest>lastdigit){
  second_small=smallest;
  smallest=lastdigit;
}
 else if(lastdigit>smallest && lastdigit<second_small)
 second_small=lastdigit;
 n=n/10;
 }
 return second_small;
}
int main(){
int a;
cout<<"Enter a number :";
cin>>a;
if(a<0)
cout<<"Please enter positive number :";
int result=second_smallest(a);
if(result==10)
  cout<<"No second smallest number";
else
  cout<<"The second smallest number is "<<result;
  return 0;
}
