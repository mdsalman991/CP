int majorityElement(int a[], int size)
{
        
    // your code here
    int val = size/2;
    int ma = a[0];
    int count = 1;
    for(int i=1;i<size;i++){
        if(a[i]==ma) count++;
        else count--;
        if(count==0){
            ma = a[i];
            count = 1;
        }
    }
    int c=0;
    for(int i=0;i<size;i++) if(a[i]==ma) c++;
    if(c > val) return ma;
    return -1;
}
//find majority