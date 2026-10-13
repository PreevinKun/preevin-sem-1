#include <stdio.h>
int binary_search( int arr[], int n, int key, int key_count[]){
    int s=0;
    int l=n-1;
    int mid;
    int i=0;
    int flag=0;
    while (s<=l){
        mid= s+ (l-s)/2;
        if (arr[mid]== key){
            key_count[i]=mid;
            i+=1;
            l=mid-1;
            flag=1;
            

        }
        else {
            if (arr[mid]<key){
                s+=1;
            }
            else{
                l-=1;
            }
        }

        
        

    }if (flag==1)
    { return key_count[i-1];
    }
    else{
    return -1;}
}
int main(){
    int n;
    printf("enter the no of elements\n");
    scanf("%d",&n);
    int arr[n];
    int ele_count[n];
    for (int i=0;i<n; i++){
        printf("enter element %d \n", i+1);
        scanf ("%d",&arr[i]);

    }
    int key;
    printf("enter element to be searched\n");
    scanf("%d",&key);
    n=sizeof(arr)/sizeof(arr[0]);
    int pos;
    int key_count[n];
    pos = binary_search (arr, n, key, key_count);
    if (pos !=-1){
        printf("element %d found at pos %d \n", key,pos+1);
    }
    else{
        printf("element %d not found \n", key);
    }
    return 0;
}