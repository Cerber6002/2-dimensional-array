
#include <iostream>

using namespace std;

int main()
{
 int arr[100][100];
 int rows,colums,n;
 cin>>n;
 rows=n;
 colums=n;
 for(int i=0;i<rows;i++)
 for(int j=0;j<colums;j++)
     cin>>arr[i][j];
 
 int sum=0;
 int num=0;
 for(int i=0;i<rows;i++)
 for(int j=0;j<colums;j++){
     if(arr[i][j]<0 && arr[i][j]%2==0){
         sum=sum+arr[i][j];
         num=num+1;
     }
     }
     cout<<num<<" "<<sum;
 }