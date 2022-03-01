#include<bits/stdc++.h>
using namespace std;

int *arr,n;
//displaying array

void DisplayArray()
{
 for (int i=0;i<n;i++)
cout<< " Array [ "<<i<<" ] = "<<arr[i]<<endl;
}

void SetDefaultValues()
{
for(int i=0;i<n;i++)
arr[i]= NULL;
}

//inserting array
void InsertValues()
{
cout<<" Enter "<<n<<" Values "<<endl;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"\n Array Values Inserted...  Successfully "<<endl;
}

//deleting array
void DeleteValues()
{
cout<<" Enter the Index Number To Delete Value : ";
int index;
cin>>index;
if(index>n-1||index<0)
 {
 cout<<" Invalid Index Entered "<<endl;
 DeleteValues();// Recall The Function it self
 }
 else
 {
 arr[index]=NULL;
 }
 cout<<"\n Array Value Deleted...  Successfully "<<endl;
}

//updating array
void UpdateValues()
{
 cout<<"\n Enter Index Number to Update Value : ";
 int index;
 cin>>index;
 if(index>n-1||index<0)
 {
 cout<<"\n Invalid Index Entered "<<endl;
 UpdateValues();// Recall The Function it self
 }
 else
 {
 cout<<"\n Enter the New Value For Index array[ "<<index<<" ] = ";
cin>>arr[index];
cout<<"\n Array Updated...  Successfully "<<endl;
 }
}

//all triplets with sum zero
void findTripletsWithSumZero()
{
bool is_found = false;
for (int i = 0; i < n-2; i++)
 {
 for (int j = i+1; j < n-1; j++) 
 {
for (int k = j+1; k < n; k++) 
{
if (arr[i]+arr[j]+arr[k] == 0) 
 {
cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
is_found = true;
 }
}
}
}
if (is_found == false) 
{
cout << " Triplets doesn't exist "<<endl;
}
}

// minimum distance 
void minDist() 
{ 
 int min=arr[1]-arr[0];
for(int i=1;i<(n-1);i++)
 {
 long int temp = abs(arr[i]-arr[i+1]);
 if (temp <= min) 
{
min = temp;
 }
 }
 cout<<" Minimum distance is : "<<min<<endl;
} 

// MAXIMUM DISTANCE
void maxDist() 
{ 
 int max=arr[1]-arr[0];
for(int i=1;i<(n-1);i++)
{
long int temp = abs(arr[i]-arr[i+1]);
 if (temp >= max) 
 {
 max = temp;
 }
}
cout<<" Maximum distance is : "<<max<<endl;
} 

// A utility method to swap two numbers.
void swap(int *x, int *y)
{
 int temp = *x;
 *x = *y;
 *y = temp;
}

//sort in the wave form i.e. arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= …..
void sortInWave()
{
    // Sort the input array
 sort(arr, arr+n);

    // Swap adjacent elements
for (int i=0; i<n-1; i += 2)
 swap(&arr[i], &arr[i+1]);
}
//template
template <class A>
//array class
class Arrays{
 public:
 Arrays()
 {
 A option;
 SetDefaultValues();
 do
{ 
cout<<"\n************\n";
   cout<<"\n MAIN MENU \n";
cout<<"\n************\n";
 cout<<"1. INSERT ARRAY\n";
cout<<"2. DELETE ARRAY\n";
cout<<"3. UPDATE ARRAY\n";
 cout<<"4. TRIPLET WITH SUM ZERO\n";
 cout<<"5. MINIMUM DISTANCE \n";
cout<<"6. MAXIMUM DISTANCE\n";
cout<<"7. SORT IN WAVE FORM\n";
 cout<<"8. EXIT\n";
 cout<<" Enter the option : ";
 cin>>option;
 switch(option)
 {
 case 1:
cout<<" Insert Function Called "<<endl;
InsertValues();
                   cout<<" Inserted Values : "<<endl;
                   DisplayArray();
                   break;
        
                case 2:
                   DeleteValues();
                   cout<<"\n Array After Deleting Values : "<<endl;
                   DisplayArray();
                   break;        
                case 3:
                    UpdateValues();
                    cout<<"\n Updated Array : "<<endl;
                    DisplayArray();
                    break;
                case 4:
                    cout<<"\n Triplet with sum zero : \n";
                    findTripletsWithSumZero();
                    break;
                case 5:
                    minDist();
                    break;
                case 6:            
                    maxDist();
                    break;
                case 7:
                    sortInWave();
                    cout<<"\n Array after sorting in wave : \n";
                    DisplayArray();
                    break;
            }
        }while(option!=8);
        cout<<"\n The code ended \n";
    }
};

//erroneous handling
class Arrays_exception : public exception
{
    public:
    const char * what() const throw()
    {
        return "\n Array size should be more than 0 ";
    }
};
//main function
int main()
{
    
        cout<<"\n Enter the size of array : ";
        cin>>n;
        arr=new int(n);
        //try catch statement
        try{
            if(n<=0)
            {    Arrays_exception ar;
throw ar;
 }
 else{
Arrays<int> a;   //OBJECT OF CLASS
            }
        }
        catch(exception &e){
            cout<<e.what()<<endl;
        }
    return 0;
}