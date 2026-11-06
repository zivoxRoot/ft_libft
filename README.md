# Libft

*This project has been created as part of 42 curriculum by tdefeche.*

## Description

This C library is a rebuild of some functions from different standard C libraries. They are meant to behave exactly the same as their counterpart and be used to build other projects later in the curriculum.

> [!NOTE]
> All functions start with `ft_` before their name, so you will find them in the corresponding `ft_{function name}.c` file

<details>
<summary>These functions can be stored in different categories:</summary>

## Standard library

**Characters-related functions**
|Function          |Goal                                                  |
|------------------|------------------------------------------------------|
|isalpha           |Verify if a character is alphabetical [az-AZ]         |
|isdigit           |Verify if a character is a digit [0-9]                |
|isalnum           |The combination of the two previous functions         |
|isascii           |Verify if a character is part of the ascii table      |
|isprint           |Verify is a character is printable                    |
|toupper           |Put a lowercase character in uppercase                |
|tolower           |Put an uppercase character in lowercase               |

**String-related functions**
|Function          |Goal                                                  |
|------------------|------------------------------------------------------|
|strlen            |Returns the length of a string                        |
|strlcpy           |Copies a string into a buffer                         |
|strlcat           |Concatenate a string into another one                 |
|strchr            |Returns the first occurance of a character in a string|
|strrchr           |Returns the last occurance of a character in a string |
|strncmp           |Compare two strings                                   |
|strdup            |Returns a duplicate of a string                       |

**Memory-related functions**
|Function          |Goal                                                  |
|------------------|------------------------------------------------------|
|memset            |Fills a memory area with a constant byte              |
|bzero             |Fills a memory area with 0s                           |
|memcpy            |Copies a memory areainto another one                  |
|memmove           |Same as memcpy but handles overlapping memory areas   |
|memcmp            |Compare two memory areas                              |
|calloc            |The `calloc` function: allocate a memory area with 0s |

**Other functions**
|Function          |Goal                                                  |
|------------------|------------------------------------------------------|
|atoi              |convert an int to a string                            |

## Additional functions

<!-- TODO: add them and the linked list -->

**Characters-related functions**
|Function          |Goal                                                  |
|------------------|------------------------------------------------------|
|isalpha           |Verify if a character is alphabetical [az-AZ]         |
|isdigit           |Verify if a character is a digit [0-9]                |

## Linked list

**Characters-related functions**
|Function          |Goal                                                  |
|------------------|------------------------------------------------------|
|isalpha           |Verify if a character is alphabetical [az-AZ]         |
|isdigit           |Verify if a character is a digit [0-9]                |
</details>

## Instructions

## Ressources

## Usage

cc -Wall -Wextra main.c -L. -lft -lbsd -o test
