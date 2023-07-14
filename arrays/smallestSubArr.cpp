#include <iostream>
using namespace std ;
int smallestSubWithSum (int arr[],int n , int x) {
	int sum = 0, min_len = n + 1;
    	int i = 0, j = 0;

        	while (j < n) {
		
		          while (sum <= x && j < n)
		        	sum += arr[j++];

	
	    	while (sum > x && i < n) {
		
			if (j - i < min_len)
				min_len = j-i;

			
			sum -= arr[i++];
		}
        	}
	return min_len;
}// end

int main () {
	int arr1[] = { 1, 4, 45, 6, 10, 19 };
	int x = 51;
	int n1 = sizeof(arr1) / sizeof(arr1[0]);
	int res1 = smallestSubWithSum(arr1, n1, x);
	(res1 == n1 + 1) ? cout << "Not possible\n"
					: cout << res1 << endl;

}