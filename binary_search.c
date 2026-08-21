#include <stdio.h>

int main() {
    int n, key;
    printf("How many books you want to store?: \n");
    scanf("%d", &n);
    
    int books[n];
    printf("Enter %d sorted books: \n", n); // Fixed: Added 'n' here
    
    for(int i = 0; i < n; i++){ // Fixed: Used ';' and changed '<=' to '<'
        scanf("%d", &books[i]);
    }
    
    printf("Enter a key ID to search: \n");
    scanf("%d", &key);

    int low = 0;
    int high = n - 1;
    int found = -1;

    while(low <= high){
        int mid = (low + high) / 2;
        
        if(books[mid] == key){ // Fixed: Array name 'books' and used '=='
            found = mid;
            break; // Fixed: Added break to exit loop when found
        }
        else if(books[mid] < key){
            low = mid + 1; // Fixed: Update 'low', not 'mid'
        }
        else{
            high = mid - 1; // Fixed: Update 'high', not 'mid'
        }
    } // Fixed: Added missing closing brace for the while loop

    printf("--------Result---------\n");
    if(found != -1){
        printf("Book found at position %d\n", found + 1); // Fixed typo 'postion'
    }
    else{
        printf("Book does not exist!\n"); // Fixed typo 'exit'
    }
    
    return 0;
}
