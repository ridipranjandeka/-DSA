#include<stdio.h>
int linearSearch(int arr[],int size, int element) {
    for(int i = 0;i<size;i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,6,3,5,65,7,8,76,78,98,45,67};
    int size = sizeof(arr)/sizeof(int);
    int element = 5;
    int searchIndex = linearSearch(arr,size,element);
    printf("The element %d was found at index %d\n",element,  searchIndex);
    return 0;
}