#include<iostream>
using namespace std;
int main(){
   int num,num1,i,f,arr,arr1;
  int arr[5]={0,5,2,8,10,4};
  int arr1[5]={5,5,7,10,20,5};
   
   for(i=num;i<num1;i++)
  {
    arr[i]=num;
    num++;
  }
  for (i=num1; i<num;i++){
      arr1[i]=num1;
  }

   /* 
    while (num<=num1)
    {
        f=0;
        for (i=2; i<=num/2; i++)
        {
            if(num%i==0){
                f=1;
                break;
               
            }
        }
        if (f==0)
        cout<<num<<" is a prime number \n";
        num=num+1;
    }
    */
}