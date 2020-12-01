int funcion_resta(int minuendo, int sustraendo) {
    int resta = minuendo - sustraendo;
    return resta;
}

int main() {
    int resultado = 100;
    resultado += funcion_resta(50, 30); // 100+(50-30)
    ++resultado; // 120 + 1
    return resultado; // 121
}
