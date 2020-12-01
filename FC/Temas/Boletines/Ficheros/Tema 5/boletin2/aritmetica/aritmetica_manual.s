        #### Segmento de datos (variables globales del programa)
        .data
myVar:
        .long   3       # Variable de tipo entero (tamaño: 4 bytes)
                        # con valor inicial 3

        #### Segmento de código (instrucciones del programa)
        .text
        .globl  main

        # Procedimiento principal, llamado por el cargador del SO (loader)
main:
        movl    myVar, %eax     # Lee la variable myVar de memoria y
                                # pone su valor en el registro EAX
        addl    $5, %eax        # Suma 5 a EAX
        sall    $2, %eax        # Desplaza EAX 2 bits a la izquierda
        movl    $2, %edx        # Carga la constante 2 en el registro EDX
        imull   %edx            # Multiplica EDX*EAX, producto en EDX:EAX
        decl    %eax            # Resta uno al valor de EAX
        movl    %eax, myVar     # Escribe el valor de EAX en memoria
        ret                     # Termina el procedimiento main,
                                # regresa al invocador

