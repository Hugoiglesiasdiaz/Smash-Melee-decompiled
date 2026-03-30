# Melee Decompilation Technical Test / Prueba Técnica de Decompilación

## Phase 0: Environment Verification / Verificación del Entorno
* **Status / Estado:** Environment successfully configured with the original toolchain (CodeWarrior/Ninja). / Entorno configurado con éxito usando el toolchain original.
* **Local Progress / Progreso Local:** 61.28% matching, perfectly aligned with the official project (decomp.dev/melee). / 61.28% de coincidencia, alineado con el proyecto oficial.

---

## Phase 1: mnNameNew_KeySetup (Short Function / Función Corta)
* **Location / Ubicación:** `src/melee/mn/mnnamene_key.c`
* **English:** This function performs a bitwise shift and a multiplication by 5. It is typically used to calculate memory offsets for indexing player name slots within the game's menu structures.
* **Español:** Esta función realiza un desplazamiento de bits y una multiplicación por 5. Se utiliza típicamente para calcular "offsets" de memoria al indexar los slots de nombres de jugadores en las estructuras de menú del juego.
* **Standard:** C89 (ANSI C) matching.

---

## Phase 2: HSD_CheckSomething (40+ Instructions Challenge / Reto de +40 Instrucciones)
* **Location / Ubicación:** `src/sysdolphin/baselib/hsd_check.c`
* **English:** A critical function within the SysDolphin engine that manages global object states. It utilizes SDA21 (Small Data Area) addressing to access rendering control pointers efficiently. The logic includes hardware register comparisons to validate engine execution flow.
* **Español:** Una función crítica del motor SysDolphin que gestiona estados globales de objetos. Utiliza direccionamiento SDA21 para acceder a punteros de control de renderizado de manera eficiente. La lógica incluye comparaciones de registros de hardware para validar el flujo de ejecución del motor.
* **Standard:** C89 (ANSI C) compatible.

---
*Note: All source code has been written following the ANSI C (C89) standard to ensure byte-for-byte identical matching with the original GameCube compiler.*
*Nota: Todo el código fuente ha sido escrito siguiendo el estándar ANSI C (C89) para garantizar una coincidencia binaria idéntica con el compilador original de GameCube.*
