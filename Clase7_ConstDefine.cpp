En C++, const y #define se utilizan para definir constantes, pero tienen diferencias significativas en cómo se comportan y en cómo se utilizan. Aquí están las principales diferencias:

1. const
Tipo de Datos: const permite definir constantes con un tipo de datos específico. Por ejemplo, puedes definir una constante entera, flotante, de carácter, etc.
Chequeo de Tipos: Las constantes definidas con const son verificadas por el compilador para el tipo de datos. Esto ayuda a evitar errores de tipo.
Ámbito: Las constantes const respetan las reglas de ámbito de C++. Pueden ser locales a una función, a un bloque de código, o globales si se definen fuera de cualquier función.
Uso en Depuración: Las constantes const se pueden depurar y ver en herramientas de depuración, ya que son variables reales con direcciones de memoria.
Scope Resolution: Puedes utilizar el operador de resolución de ámbito (::) para acceder a las constantes definidas en diferentes espacios de nombres.
Ejemplo:

const int SIZE = 30;
2. #define
Preprocesador: #define es una directiva del preprocesador. No define una constante en el sentido de C++, sino que realiza una sustitución textual antes de la compilación.
Sin Chequeo de Tipos: #define no realiza chequeo de tipos, ya que es simplemente una sustitución textual. Esto puede llevar a errores difíciles de depurar.
Ámbito: Las definiciones #define tienen un ámbito de archivo. Son válidas desde el punto donde se definen hasta el final del archivo o hasta que se anulan con #undef.
No Depurables: Las macros #define no tienen una dirección de memoria y no pueden ser vistas en herramientas de depuración.
Mantenimiento: Las macros pueden 