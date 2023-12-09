
#include <iostream>

using namespace std;

int main(){
 int arr[500][500];
 int rows,colums,n;
 int num;
 cin>>n;
 rows=n;
 colums=n;
 for(int i=0;i<rows;i++){
     if(i%2==0){
         for(int j=0;j<colums;j++){
             arr[i][j]=num;
             num++;
         }
     }
 
 else{
     for(int j=colums-1; j>=0;j--){
         arr[i][j]=num;
         num++;
     }
 }
 }
 for(int i=0;i<rows;i++){
     for(int j=0;j<colums;j++)
     cout<<arr[i][j]<<" ";
     cout<<endl;
 }

return 0;
 }