int funcion0() {
    return 0;
}

int funcion1() {
    return funcion0() + 1;
}

int funcion2() {
    return funcion1() + 2;
}

int funcion3() {
    return funcion2() + 3;
}

int funcion4() {
    return funcion3() + 4;
}

int funcion5() {
    return funcion4() + 5;
}

int main() {
    // 5 + 4 + 3 + 2 + 1 = 15
    return funcion5();
}
