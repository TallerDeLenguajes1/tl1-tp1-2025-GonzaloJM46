[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf) 

#### ¿Por qué es conveniente incluir un archivo .gitignore?

- Mantener el repositorio **ordenado**: Impide que se suban archivos innecesarios, como los específicos de tu entorno local, archivos temporales de editores de texto o generados por compiladores, lo que ayuda a mantener el repositorio limpio.

- **Optimizar** el rendimiento: Git no tiene que rastrear archivos que no son relevantes para el código fuente (como dependencias o archivos de compilación), lo que reduce el tamaño del repositorio y mejora su rendimiento.

- **Proteger** datos sensibles: Algunos archivos pueden contener información privada o sensible (como claves API, contraseñas o configuraciones de bases de datos) que no debe compartirse. El archivo .gitignore asegura que esos archivos no se añadan accidentalmente al repositorio.

- Facilitar la **colaboración**: En equipos de trabajo, cada miembro suele tener configuraciones y entornos locales distintos. Al ignorar archivos específicos de cada entorno (como configuraciones de IDE o archivos personales), se evitan conflictos innecesarios entre los colaboradores


### ¿Cuándo se debe hacer?

Lo ideal es crear y configurar un archivo .gitignore al **comenzar** un proyecto. De esta forma, te aseguras de que no se suban archivos innecesarios al repositorio desde el principio. Sin embargo, si ya has iniciado el proyecto sin este archivo, no hay problema: puedes **añadirlo** en cualquier etapa y configurarlo de forma correcta en cualquier momento.


#### ¿Cómo configuraría el archivo .gitignore?

- Por ej para ignorar archivos que se generan al compilar:

*.o
*.a
*.out

- O por ejemplo para ignorar archivos de logs

*.log

**Las reglas pueden incluir patrones de nombres de archivos y directorios completos.**