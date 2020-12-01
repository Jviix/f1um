        #### Segmento de datos (variables globales del programa)
        .data
holastr:
        .string "¡Hola, mundo!"

        .text
        .globl  main
main:
        lea     holastr, %edi
        call    puts

        ret
