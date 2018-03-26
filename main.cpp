#include <iostream>
#include <cstring>
using namespace std;
string arr2="0123456789";
int fun(char x[3]){
    int  n=strlen(x);
    int arr1[n];
    for(int i=0;i<n;i++){
        for(int m=0;m<=9;m++){
            if(x[i]==arr2[m]){
               arr1[i]=m;}}}
            cout<<"The Max of Number is : ";
            for(int i=0;i<n;i++){
                if(arr1[i]==1||arr1[i]==4||arr1[i]==7){
                    cout<<(arr1[i]+1);
                    for(int j=i+1;j<n;j++){
                         arr1[j]=0;
                         cout<<arr1[j];}
                    cout<<endl;
                    return 0;}
                else
                   cout<<arr1[i];}
            cout<<endl;
}
int fun0(char y[3]){
     int  n=strlen(y);
    int arr1[n];
    for(int i=0;i<n;i++){
        for(int m=0;m<=10;m++){
            if(y[i]==arr2[m])
               arr1[i]=m;}}
    cout<<"The Min of Number is : ";
    for(int i=0;i<n;i++){
        if(arr1[i]==1||arr1[i]==4||arr1[i]==7){
            cout<<(arr1[i]-1);
            if(n==1){
                return 0;}
            for(int j=i+1;j<n;j++){
                arr1[j]=9;
                cout<<arr1[j];}
            return 0;}
        else
            cout<<arr1[i];}
}
int main()
{
    char num[3];
    cout<<"Enter Number 1 to 999 : ";
    cin>>num;
    fun(num);
    fun0(num);
    return 0;
}
