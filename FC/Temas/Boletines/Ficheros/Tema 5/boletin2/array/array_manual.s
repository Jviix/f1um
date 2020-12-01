        #### Segmento de datos (variables globales del programa)
        .data
array:
        .long   10
        .long   20
        .long   30
        .long   40
        .long   50

        #### Segmento de código (instrucciones del programa)
        .text
        .globl  main

        # Procedimiento principal, llamado por el cargador del SO (loader)
main:
        # Variables locales a main:
        # i -> registro ESI
        # sum -> registro EAX
        
        movl    $0, %eax        # Inicializa sum a 0
        
        ##### Bucle for:
        
        movl    $0, %esi        # Inicializa i a 0
inicio_for:
        # Comprobación de la condición
        cmpl    $5, %esi        # Compara ESI con 5 (tamaño del array)
        jge     fin_for         # Salta a fin_for si cmp anterior fue mayor o igual
        
        movl    array(,%esi,4), %ecx    # Lee variable en la dirección de memoria
                                        # array+4*i y lo guarda en el registro ECX
        addl    %ecx, %eax      # sum += array[i]

        # Incremento de la variable de control
        inc     %esi            # i++
        # Regresa al inicio del bucle
        jmp     inicio_for
fin_for:
        # EAX contiene sum (valor retornado por main)
        ret                     # Termina el procedimiento main,
                                # regresa al invocador

