#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n) {

    int left = 0, right = n-1;

    while(left < right) {

        if(arr[left] == 0 && left < right )  {
            left++;
        } else if(arr[right]==2 && left < right){
            right--;
        } else if(arr[left]==2 || arr[right]==0) {
            swap(arr[left], arr[right]);
        } else {
            swap(arr[left], arr[left+1]);
            swap(arr[right], arr[right-1]);
        }
        
    }

}

int main() {

    int arr[8] = {1,1,0,2,1,2,1,0};

    sortOne(arr, 8);
    printArray(arr, 8);


    return 0;
}