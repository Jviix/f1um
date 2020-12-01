#define ARRAY_SIZE 5

int array[ARRAY_SIZE] = {10,20,30,40,50};

int main() {
    int i, sum = 0;
    for(i=0; i < ARRAY_SIZE; i++) {
        sum += array[i];
    }
    return sum;
}
