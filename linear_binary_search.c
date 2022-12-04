#include<stdio.h>
#include<conio.h>
int LinearSearch(int arr[], int element , int size){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
        
    }
    return -1;
}
//now for the binary search in the c program
int BinarySearch(int arr[],int element, int size){
    int low , mid, high;
    low =0;
    high=size-1;
    int counter=0;
    //search starts from here
    while (low<=high)
    {
        mid=(low+high)/2;
        counter++;
        if(arr[mid]==element){
            return element;
        }
        if(arr[mid]<element){
            // low=mid;
            // now we don't do that because we know that mid doesn't have the element that we are looking for so we increment it one time 
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    //searching ends here
    return -1;
    
}

int main(){
    int element;
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,36,66,79};
    printf("Enter the element that you want to find: ");
    scanf("%d",&element);
    int size=sizeof(arr)/sizeof(int);
    // int result=LinearSearch(arr,element,size);
    int result=BinarySearch(arr,element,size);
    printf("The element %d was found at index %d",element,result);

}