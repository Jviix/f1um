#include <stdio.h>


int ping(int parametro);
int pong(int parametro);

int pong(int parametro) {
    return ping(parametro+1);
}

int ping(int parametro) {
    return pong(parametro+1);
}


int main() {
    ping(0);
}
