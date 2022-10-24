#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int temp;
    for(int i = 1; i < n; i++)
    {
        temp = arr[i];
        int j = i-1;

        while(j >= 0 && temp < arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
int main(){
	 int arr[100], n;
    cout << "Enter the Size of Array : ";
    cin >> n;

    cout << "Enter the Elements of Array : ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    insertionSort(arr, n);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
