<<<<<<< HEAD
:

=======
global    main

extern    printf
main:
mov   edi, format
xor   eax, eax
call  printf
mov 	eax, 0
ret
format: db `Hello, Holberton\n`,0
>>>>>>> e7efd92fd56c7c2dacd6a757c12ff51e27635c55
