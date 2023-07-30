// merging these two sorted arrays
void merge (vector <int> & arr , int low ,int mid, int high ){

vector<int> temp;

int leftPointer = low ;
int rightPointer = mid + 1;

while(leftPointer <= mid && rightPointer <= high){
    // compare element and sort them accordingly bro
    if(arr[leftPointer]<arr[rightPointer]){
        temp.push_back(arr[leftPointer]);
        leftPointer = leftPointer + 1;
    }
    else {
        temp.push_back(arr[rightPointer]);
        rightPointer = rightPointer + 1;
    };

}
// now also put remaining elememts in temp back to
 // main array

while(leftPointer <= mid){
    temp.push_back(arr[leftPointer]);
    leftPointer++;
};

while(rightPointer <= high){
    temp.push_back(arr[rightPointer]);
    rightPointer++;
};


for(int i= low ;i<=high ; i++){
    arr[i]=temp[i-low];
}



}







// breaking arrays and sorting them
void mS(vector <int> & arr, int low , int high ){
    int mid;
    if(low >= high){
        return;
    };

   // int mid;
    mid = (low + high)/2;
    mS(arr,low,mid);
    mS(arr,mid+1,high);
    merge(arr,low,mid,high);
}


void mergeSort(vector < int > & arr, int n) {


    mS(arr,0,n-1);
}