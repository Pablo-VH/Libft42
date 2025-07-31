# Libft42 🇪🇸

**Libft42** es una biblioteca personal de funciones en C, desarrollada como proyecto inicial en la escuela 42. Contiene implementaciones propias de funciones estándar de C y funciones auxiliares útiles para futuros proyectos.


## 🧠 Descripción

El objetivo de Libft42 es crear una biblioteca reutilizable que implemente funciones estándar de la librería C (`<string.h>`, `<ctype.h>`, etc.) y otras funciones comunes para manejo de cadenas, memoria, listas enlazadas, etc.  

Esta biblioteca sirve como base para otros proyectos de la escuela 42.


## ✨ Funciones principales

- Funciones de manipulación de cadenas (`ft_strlen`, `ft_strcpy`, etc.)
- Funciones para manejo de memoria (`ft_memset`, `ft_memcpy`, etc.)
- Funciones de conversión (`ft_atoi`, `ft_itoa`)
- Funciones de clasificación (`ft_split`, `ft_strjoin`, etc.)
- Estructuras y funciones para listas enlazadas


## ⚙️ Instalación

Clona el repositorio y compila la biblioteca:

```bash
git clone https://github.com/Pablo-VH/Libft42.git
cd Libft42
make
```

## ▶️ Uso

Incluye el header principal en tus archivos:

```c
#include "libft.h"
```
Y enlaza con la librería al compilar:
```bash
cc -L/path/to/libft -lft your_program.c -o your_program
```


## 🧱 Estructura del proyecto

- `srcs/`   – Código fuente de las funciones  
- `includes/` – Archivos de cabecera (.h)  
- `Makefile`  – Script de compilación


## 📦 Requisitos
- Sistema UNIX (Linux o macOS)
- `cc` y `make`

---

# Libft42 🇬🇧

**Libft42** is a personal library of C functions, developed as an initial project at School 42. It contains custom implementations of standard C functions and auxiliary functions useful for future projects.


## 🧠 Description

The goal of Libft42 is to create a reusable library that implements standard C library functions (`<string.h>`, `<ctype.h>`, etc.) and other common functions for string handling, memory management, linked lists, etc.  

This library serves as a foundation for other projects at School 42.


## ✨ Main functions

- String manipulation functions (`ft_strlen`, `ft_strcpy`, etc.)
- Memory management functions (`ft_memset`, `ft_memcpy`, etc.)
- Conversion functions (`ft_atoi`, `ft_itoa`)
- Sorting functions (`ft_split`, `ft_strjoin`, etc.)
- Structures and functions for linked lists


## ⚙️ Installation

Clone the repository and compile the library:

```bash
git clone https://github.com/Pablo-VH/Libft42.git
cd Libft42
make
```

## ▶️ Usage

Include the main header in your files:

```c
#include ‘libft.h’
```
And link to the library when compiling:
```bash
cc -L/path/to/libft -lft your_program.c -o your_program
```


## 🧱 Project structure

- `srcs/`   – Function source code  
- `includes/` – Header files (.h)  
- `Makefile`  – Compilation script


## 📦 Requirements
- UNIX system (Linux or macOS)
- `cc` and `make`
