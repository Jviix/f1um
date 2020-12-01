        #### Segmento de código (instrucciones del programa)
        .text
        .globl  main

funcion_resta:
        # Función: int resta(int minuendo, int sustraendo):
        # Recibe como parámetros dos enteros vía registros:
        # - 1er argumento (en EDI): Minuendo
        # - 2º argumento (en ESI): Sustraendo
        # Valor retornado (en EAX): La resta (minuendo-sustraendo)

        # Variable local 'resta' en EAX
        movl    %edi, %eax      # Copio minuendo a EAX
        subl    %esi, %eax      # EAX = EAX - ESI 
        ret                     # EAX contiene el valor a devolver

        # Procedimiento principal, llamado por el cargador del SO (loader)
main:
        # Variables locales a main:
        # resultado: EBX
        movl    $100, %ebx      # Inicializa 'resultado'
        
        movl    $50, %edi       # Establece primer argumento
        movl    $30, %esi       # Establece segundo argumento
        call    funcion_resta   # Llama a funcion_resta
        # EAX: Valor devuelto por el procedimiento
        addl    %ebx, %eax      # EAX = EAX + EBX
        inc     %eax            # ++resultado
        # EAX contiene sum (valor retornado por main)
        ret                     # Termina el procedimiento main,
                                # regresa al invocador

