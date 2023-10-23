#include <iostream>
using namespace std;

int uniqueelement(int arr[],int size){
int ans=0;
  for(int i=0;i<size;i++){

    ans=ans^arr[i];
  }

return ans;





}

int main() {
  int arr[9]={2,10,11,10,2,13,15,13,15};
  int size=9 ;
  int ans= uniqueelement(arr,size);
  cout<<"unique element is :"<<ans;

}