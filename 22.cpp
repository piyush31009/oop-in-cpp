//WAP to find out the sum of the numbers stored in an array of integers.
#include <iostream>
using namespace std;
int main(){
    int n,  sum=0;
    cout<<"Enter the number of integers in the array:\n";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter element "<<i+1<<":\n";
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        sum+=arr[i];
    }

    cout<<"Sum of all the integers: "<<sum<<"\n";
    return 0;
}