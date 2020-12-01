#define ARRAY_SIZE 10

int array[ARRAY_SIZE] = {10,9,8,7,6,5,4,3,2,1};

int main() {
    int i;
    for(i=0; i < ARRAY_SIZE; i++) {
        array[i] = -1;
    }
}
