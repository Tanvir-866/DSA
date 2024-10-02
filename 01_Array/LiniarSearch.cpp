#include<iostream>
using namespace std;

bool search(int arr[], int size, int key) {

    for( int i = 0; i<size; i++ ) {

        if( arr[i] == key) {
            return 1;
        }

    }
    return 0;
    
}
void getArr(int arr[],int size)
{
   
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}


int main() {

    int arr[1000],size;
    cout<<"Enter the Araay size :";
    cin>>size;
    getArr(arr,size);
    cout <<" Enter the key to search : "; 
    int key;
    cin >> key;

    bool found = search(arr, size, key);

    if( found ) {
        cout <<" Key is hear "<< endl;
    }
    else{
        cout <<" Key is not hear " << endl;
    }

    return 0;
}