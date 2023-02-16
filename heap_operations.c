//heap functions
#include <stdio.h>
#include <math.h>
int arr[] = {40,20,30,35,25,80,32,100,70,60}; 
int temp;
int top = 9;
void minHeapify(int i){
    if(2*i+2>top)return;
    int min = arr[i]<arr[(2*i+1)]?(arr[i]<arr[(2*i+2)]?(i):(2*i+1)):(arr[(2*i+1)]<arr[(2*i+2)]?(2*i+1):(2*i+2));
    if(arr[min]==arr[i])return;
    else{
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        minHeapify(min);
    }
}
void extractMin(){
    temp = arr[0];
    arr[0] = arr[top];
    arr[top] = temp;
    top--;
    minHeapify(0);
}
int parent(int i){
    return ((i-1)/2);
}
void insert(int val){
    top++;
    
    arr[top]=val;
    for(int i = top; arr[parent(i)]>arr[i];){
        temp = arr[parent(i)];
        arr[parent(i)] = arr[i];
        arr[i] = temp;
        i = parent(i);
    }
}
void decreaseKey(int i,int val){
    arr[i] = val;
    for(; arr[parent(i)]>arr[i];){
        temp = arr[parent(i)];
        arr[parent(i)] = arr[i];
        arr[i] = temp;
        i = parent(i);
    }
}
void delete(int i){
    decreaseKey(i,-3000);
    top--;
}
int main() {
    
    // Write C code here
    minHeapify(0);
    printf("After minheapify: ");
    for(int i = 0; i < top+1; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    extractMin();
    printf("After extracting minimum: ");
    for(int i = 0; i < top+1; i++){
        printf("%d ",arr[i]);
    }
    insert(20);
    printf("\n");
    printf("After inserting: ");
    for(int i = 0; i < top+1; i++){
        printf("%d ",arr[i]);
    }
    decreaseKey(7,33);
    printf("\n");
    printf("After decreasing key: ");
    for(int i = 0; i < top+1; i++){
        printf("%d ",arr[i]);
    }
    

    return 0;
}