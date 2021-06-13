#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n,i,j,temp;
    cout<<"hello type number";
    cin>>n;
    int arr[n];
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[i];
                arr[j]=temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"your number is ";
        
    }
    cout<<endl;
    
    getch();
    return 0;
}