Para averiguar la versión del compilador que se está utilizando solo basta con ingresar mediante terminal el código:

**gcc –version**

La terminar arrojó esto:

_gcc.exe (MinGW.org GCC-6.3.0-1) 6.3.0_

Quiere decir que tengo la versión 6.3.0 del GCC. Fue lanzada el 21 de diciembre de 2016. Esta versión pertenece a la serie **6.x** de GCC y sigue principalmente el estándar **ISO C11**, pero también incluye características de versiones anteriores del estándar C, como **C90** y **C99**.

## Cómo correr el programa:

Lograr obtener el resultado del programa puede conseguirse de varias maneras:

    I) Simplemente se presiona el botón de play que dice:
    
“Run Code” **(Ctrl + Alt + N)**
    
    II) Para compilar el programa manualmente se debe ingresar en la consola: 
  
   **gcc hello.c**
  
**_Aclaración:_** En este caso se debe poner hello.c porque el archivo que contiene el código se llama “hello.c” pero si se quiere compilar otro solo basta con cambiarle el nombre al mismo que se le asocio al programa cuando se guardó (“gcc *NombreDelArchivo*.c)

Ingresar este pequeño código hace se compile el programa y crea el archivo **.exe**, generando su ejecutable.

Luego, una vez de haber presionado enter, se procede a ingresar el código (por consola tambien):

**.\hello.exe**

Que corre el ejecutable que se creó anteriormente para devolver el resultado del código (acá tambien, si se desea correr otro programa solo basta con cambiarle el nombre al archivo elegido.

*.\NombreDelArchivo*.exe
  
    III) Para ejecutar el programa de forma redireccionada (se debe haber compilado el programa previamente) se procede a 
    ingresar en consola:
  
**.\hello.exe >”output.txt”**

Esto crea el archivo **.txt** si previamente no existía e imprime el resultado de la ejecución del programa.

**_Aviso:_** No necesariamente la salida debe llamarse output.txt, a la hora de ingresarlo, el usuario puede elegir el nombre que quiera que tenga su archivo de texto: 

*.\NombreDelArchivo*.exe >”*NombreDelArchivoRedireccionado*.txt”

**_Nota:_** El símbolo “>” redirige la salida estándar hacia el archivo “output.txt” 

