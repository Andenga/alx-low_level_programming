

          global    main
          extern    printf
main:
	  mov   edi, format
	  call  printf
	  ret
format: db `Hello, Holberton\n`,0