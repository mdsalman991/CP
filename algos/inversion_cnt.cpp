long long merge(long long arr[], long long temp[], long long low,long long mid, long long high){
    long long i=low,j=mid+1,k = low,inv_c=0;
    while(i <= mid && j<=high){
        if(arr[i]<= arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
            inv_c += (mid+1-i);
        }
    }
    while(i<=mid)  temp[k++] = arr[i++];
    while(j<=high) temp[k++] = arr[j++];
    for(long long  i=low;i<=high;i++) arr[i] = temp[i];
    
    return inv_c;


}


long long mergesort(long long arr[],long long temp[],long long low,long long high){
    long long inv_c =0;
    if(low < high){
        long long mid = (low+high)/2;
       inv_c += mergesort(arr,temp,low,mid);
       inv_c += mergesort(arr,temp,mid+1,high);
        inv_c += merge(arr,temp,low,mid,high);    
    }
    return inv_c;
}
long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
       long long int temp[N];
       return mergesort(arr,temp,0,N-1);
}

//inversion count
