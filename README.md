*Este proyecto ha sido creado como parte del currículo de 42 por amarlasc*

# Printf

## Descripción

El proyecto ft_printf consiste en la recreación de la función estándar `printf` de la librería C.
El objetivo es implementar una función propia capaz de formatear e imprimir texto en la salida estándar, siendo capaz de gestionar todos los especificadores de formato.

Para la realización del proyecto ha sido necesario comprender el funcionamiento de las funciones variádicas. Por ello, hemos utilazo la librería `stadar.h`.

## Función principal
- **ft_printf** Recorre la cadena caracter a caracter. Si encuentra `%`, se interpreta el siguiente caracter como especificador
y se llama a la función correspondiente según el tipo.

## Funciones auxiliares
- **ft_putchar** Imprime un único carácer en la salida estándar y devuelve el número de caracteres escritos.
- **ft_puthex** Convierte un número a hexadecimal y lo imprime en formato minúsculas o mayúsculas según se requiera.
- **ft_putnbr_base** Convierte un número a una base específica y lo imprime carácter a caracter.
- **ft_putnbr** Imprime un número entero con signo en base decimal.
- **ft_putptr** Imprime la dirección de un puntero en formato hexadecimal con el prefijo correspondiente.
- **ft_putstr** Imprime una cadena de caracteres hasta encontrar el carácter nulo.
- **ft_putunsigned** Imprime un número entero sin signo en base decimal.

## Instrucciones

### Compilación
Para compilar la librería, ejecutar:

```bash
make
```
Este comando generará el archivo:
```bash
libftprintf.a
```

### Limpieza de archivos
Para limpiar archivos objeto:
```bash
make clean
```
Para eliminar la librería compilada:
```bash
make fclean
```
Para recompilar el proyecto desde cero:
```bash
make re
```

### Reglas del Makefile
El `Makefile` debe contener, como mínimo, las siguientes reglas:
- `$(NAME)`: genera la librería `libftprintf.a`
- `all`: compila el proyecto
- `clean`: elimina los archivos objeto
- `fclean`: elimina los archivos objeto y la librería
- `re`: recompila el proyecto desde cero

## Estructura del proyecto
``` text
├── ft_printf.c
├── ft_printf.h
├── ft_putchar.c
├── ft_puthex.c
├── ft_putnbr_base.c
├── ft_putnbr.c
├── ft_putptr.c
├── ft_putstr.c
├── ft_putunsigned.c
├── Makefile
└── README.md

```

## Recursos

- Se ha utilizado **manual** incluido en el sistema para comprobar el prototipo de la función `printf`.

- La web de [MAKIGAS] (https://www.makigas.es/series/tutorial-de-c/funciones-variadicas).

- La web de [HARDFLOAT] (https://hardfloat.es/blog/2021/11/05/funciones-variadicas.html). 

- La web de [TRUCOSINFORMATICOS] (https://trucosinformaticos.wordpress.com/2018/11/25/funciones-variadicas/).
