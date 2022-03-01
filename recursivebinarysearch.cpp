#include<iostream>
using namespace std;
void ascendingorder(int arr[],int end)
{
  for(int i=0;i<=end;i++)
  {
     for(int j=0;j<=end-i-1;j++)
     {
        if(arr[j]>arr[j+1])
        {
           int a=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=a;
        }
     }
  } cout<<"ascending order\n";
  for(int i=0;i<=end;i++)
  {
     cout<<arr[i]<<"\t";
  }
}
int BinarySearch(int arr[], int num, int beg, int end){
 int mid;
 if (beg > end){
  cout << "Number is not found";
  return 0;
 } else {
  mid = (beg + end) / 2;
  if(arr[mid] == num){
   cout << "Number is found at " << mid+1 << " index \n";
   return 0;
  } else if (num > arr[mid]) {
   BinarySearch (arr, num, mid+1, end);
  } else if (num < arr[mid]) { 
   BinarySearch (arr, num, beg , mid-1);
  }
 }
}
int main() {
 int arr[100], num, i, n, beg, end;
 cout <<"Enter the size of an array (Max 100) \n";
 cin >> n;
 cout <<"Enter the sorted values \n";
 for(i=0; i<n; i++) {
  cin >> arr[i];
 }
 cout <<"Enter a value to be search \n";
 cin >> num;
 ascendingorder(arr,n-1);
 BinarySearch (arr, num, 0, n-1);
 return 0;
}