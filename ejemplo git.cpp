void tablademultiplicacion() {
    int limite = 0, numeroentero = 0;

  
    do {
        cout << "Ingrese numero entero positivo: ";
        cin >> numeroentero;
        if (numeroentero <= 0) {
            cout << "El numero debe ser positivo." << endl;
        }
    } while (numeroentero <= 0);

    do {
        cout << "Ingrese el limite positivo: ";
        cin >> limite;
        if (limite <= 0) {
            cout << "El limite debe ser positivo." << endl;
        }
    } while (limite <= 0);

   
    cout << "Tabla de multiplicacion del " << numeroentero << ":" << endl;
    for (int i = 1; i <= limite; i++) {
        cout << numeroentero << " x " << i << " = " << numeroentero * i << endl;
    }
}
