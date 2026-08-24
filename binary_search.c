#include <stdio.h>

int main() {
    int n, key;
    printf("How many books you want to store?: \n");
    scanf("%d", &n);
    
    int books[n];
    printf("Enter %d sorted books: \n", n);
    
    for(int i = 0; i < n; i++){ 
        scanf("%d", &books[i]);
    }
    
    printf("Enter a key ID to search: \n");
    scanf("%d", &key);

    int low = 0;
    int high = n - 1;
    int found = -1;

    while(low <= high){
        int mid = (low + high) / 2;
        
        if(books[mid] == key){ 
            found = mid;
            break; 
        }
        else if(books[mid] < key){
            low = mid + 1; 
        }
        else{
            high = mid - 1; 
        }
    } 

    printf("--------Result---------\n");
    if(found != -1){
        printf("Book found at position %d\n", found + 1);
    }
    else{
        printf("Book does not exist!\n"); 
    }
    
    return 0;
}
