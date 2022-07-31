//https://www.codingninjas.com/codestudio/problems/quick-sort_983625

int partition(vector<int>& arr, int s, int e){

    int pivot = arr[s];

    int count = 0;
    //For counting numbers which are less than pivot
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }
    //For placing pivot at right position.
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    //From here we are checking left and right part of the pivot

    int i=s, j=e;

    while(i < pivotIndex && j > pivotIndex){

        while(arr[i] <= pivot){
            i++; // This is incrmenting if the element is less than pivot 
        }

        while(arr[j] > pivot){
            j--; // This is decrmenting if the element is greater than pivot
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

void solve(vector<int>& arr, int s, int e){
    if(s >= e){
        return ;
    }
    //For creating two partition 
    int p = partition(arr, s, e);

    //For elements which are less than p
    solve(arr, s, p-1);

    //For elements which are greater than p
    solve(arr, p+1, e);
}

vector<int> quickSort(vector<int> arr)
{
    solve(arr, 0, arr.size()-1);
    return arr;
}
