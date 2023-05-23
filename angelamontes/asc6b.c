#include <stdio.h>
#include <stdbool.h>

#define NUM_PATHWAYS ((int) (sizeof(pathway2) / sizeof(pathway2[0])))

int main() {
    // Revised code for Task 6 using shortest possible intialization
    bool pathway2[8] = {1, 0, 1};
    for (int i = 0; i < NUM_PATHWAYS; i++) {
        if (pathway2[i]) {
            printf("pathway[%d] is open \n", i);
        } else {
            printf("pathway[%d] is closed \n", i);
}

        }
        
    printf("\n");

    }
    
    