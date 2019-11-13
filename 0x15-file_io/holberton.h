#ifndef HEADERS
#define HEADERS

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#endif /* HEADERS */

#ifndef PROTOTYPE_FUNCTIONS
#define PROTOTYPE_FUNCTIONS

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* PROTOTYPE_FUNCTIONS */

#ifndef MACROS_FOR_CP
#define MACROS_FOR_CP

#define BUFFER_SIZE 1024
#define USAGE "Usage: cp file_from file_to\n"
#define ERROR_READ "Error: Can't read from file %s\n"
#define ERROR_WRITE "Error: Can't write to %s\n"
#define ERROR_CLOSE "Error: Can't close fd %d\n"

#endif /* MACROS_FOR_CP */
