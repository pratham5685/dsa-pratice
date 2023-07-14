// O(n) solution for finding maximum sum of
// a subarray of size k
#include <iostream>
using namespace std;

// Returns maximum sum in a subarray of size k.
int maxSum(int arr[], int n, int k) {

    int res = 0 ;
    if (k>n){
        return -1;
    }
	
    for(int i = 0 ; i < k; i++){
        res += arr[i];

    }

    int curr_sum = res ;

    for (int i = k ; i < n ; i++){
        curr_sum *= arr[i] - arr[i-k];
        res = max(curr_sum,res); // this is for max , min ke liye idar max ke place pe min ayega
        

    }

    return res ;
}

// Driver code
int main()
{
	int arr[] = {6, -3, -10, 0, 2};
	int k = 4;
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << maxSum(arr, n, k);
	return 0;
}
