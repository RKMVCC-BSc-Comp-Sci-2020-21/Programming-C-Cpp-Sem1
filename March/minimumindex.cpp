int minIndex(int arr[], int s, int e)
{
    int sml = INT32_MAX;
    int mindex;
    for (int i = s; i < e; i++) {
        if (sml > arr[i]) {
            sml = arr[i];
            mindex = i;
        }
    }
    return mindex;
}
 
void fun2(int arr[], int start_index, int end_index)
{
    if (start_index >= end_index)
        return;
    int min_index;
    int temp;
 
    // minIndex() returns index of minimum value in
    // array arr[start_index...end_index] 
    min_index = minIndex(arr, start_index, end_index);
 
    // swap the element at start_index and min_index
    swap(arr[start_index], arr[min_index]);
 
    fun2(arr, start_index + 1, end_index);
}
