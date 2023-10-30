/*
 * File: 100-elf_header.c
 * Auth: Brennan D Baraban
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(__attribute__((unused)) unsigned char *e_ident);
void print_magic(__attribute__((unused)) unsigned char *e_ident);
void print_class(__attribute__((unused)) unsigned char *e_ident);
void print_data(__attribute__((unused)) unsigned char *e_ident);
void print_version(__attribute__((unused)) unsigned char *e_ident);
void print_abi(__attribute__((unused)) unsigned char *e_ident);
void print_osabi(__attribute__((unused)) unsigned char *e_ident);
void print_type(__attribute__((unused)) unsigned int e_type, __attribute__((unused)) unsigned char *e_ident);
void print_entry(__attribute__((unused)) unsigned long int e_entry, __attribute__((unused)) unsigned char *e_ident);
void close_elf(__attribute__((unused)) int elf);

/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf(__attribute__((unused)) unsigned char *e_ident)
{
	/* Function code */
}

/**
 * print_magic - Prints the magic numbers of an ELF header.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void print_magic(__attribute__((unused)) unsigned char *e_ident)
{
	/* Function code */
}

/**
 * print_class - Prints the class of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_class(__attribute__((unused)) unsigned char *e_ident)
{
	/* Function code */
}

/**
 * print_data - Prints the data of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_data(__attribute__((unused)) unsigned char *e_ident)
{
	/* Function code */
}

/**
 * print_version - Prints the version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void print_version(__attribute__((unused)) unsigned char *e_ident)
{
	/* Function code */
}

/**
 * print_osabi - Prints the OS/ABI of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void print_osabi(__attribute__((unused)) unsigned char *e_ident)
{
	/* Function code */
}

/**
 * print_abi - Prints the ABI version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF ABI version.
 */
void print_abi(__attribute__((unused)) unsigned char *e_ident)
{
	/* Function code */
}

/**
 * print_type - Prints the type of an ELF header.
 * @e_type: The ELF type.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_type(__attribute__((unused)) unsigned int e_type, __attribute__((unused)) unsigned char *e_ident)
{
	/* Function code */
}

/**
 * print_entry - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_entry(__attribute__((unused)) unsigned long int e_entry, __attribute__((unused)) unsigned char *e_ident)
{
	/* Function code */
}

/**
 * close_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void close_elf(__attribute__((unused)) int elf)
{
	/* Function code */
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
 */
int main(__attribute__((unused)) int argc, __attribute__((unused)) char *argv[])
{
	/* Function code */
	return (0);
}
