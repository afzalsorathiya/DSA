#include <stdio.h>

void display(int num[],int n){
    // Traversal
    for(int i =0;i<n;i++){
        printf("%d\n",num[i]);
    }

}

int main()
{
    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(num,5);


    return 0;
}
