/******************************************************************************
 * Copyright (c) 2017 Manuel Menchaca
 *
 * Libraries
 *****************************************************************************/
#ifndef INC_UTIL_H_
#define INC_UTIL_H_

//-----------------------------------------------------------------------------
// Includes
//-----------------------------------------------------------------------------
#include <SI_EFM8SB1_Register_Enums.h>                  // SFR declarations
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//-----------------------------------------------------------------------------
// Constants
//-----------------------------------------------------------------------------
#define ENABLE		1
#define DISABLE 	0

//-----------------------------------------------------------------------------
// Functions
//-----------------------------------------------------------------------------

/***************************************************************************//**
 * @brief str_to_decimalSignEncode
 *
 * @param *s, inputLenght
 *
 ******************************************************************************/
uint16_t str_to_decimalSignEncode (const char *s, uint8_t inputLength);

/***************************************************************************//**
 * @brief num_to_hex_string
 *
 * @param *s, data_in, numChar (uint8--> 2, uint16 --> 4)
 *
 ******************************************************************************/
void num_to_hex_string (char *s, uint16_t data_in, uint8_t numChar); // CODE 0X4F = 79 bytes

/***************************************************************************//**
 * @brief my_strlen
 *
 * @param *s
 *
 ******************************************************************************/
size_t my_strlen (const char *s);

/***************************************************************************//**
 * @brief my_strstr
 *
 * @param char *str, char *substr
 *
 ******************************************************************************/
char* my_strstr (char *str, char *substr);
/***************************************************************************//**
 * @brief my_strncpy
 *
 * @param char* destination, const char* source, size_t num
 *
 ******************************************************************************/
char* my_strncpy(char* destination, const char* source, size_t num);

/***************************************************************************//**
 * @brief my_memcpy
 *
 * @param void * dst, void const * src, size_t len
 *
 ******************************************************************************/
void * my_memcpy(void * dst, void const * src, size_t len);

/***************************************************************************//**
 * @brief my_memset
 *
 * @param void *str, char c, size_t n
 *
 ******************************************************************************/
void *my_memset(void *str, char c, size_t n);

/***************************************************************************//**
 * @brief my_strcpy
 *
 * @param char *destination, const char *source
 *
 ******************************************************************************/
void my_strcpy(char *destination, const char *source);

/***************************************************************************//**
 * @brief my_strcat
 *
 * @param char* destination, const char* source
 *
 ******************************************************************************/
void my_strcat (char* destination, const char* source);

/***************************************************************************//**
 * @brief my_strcmp
 *
 * @param *s1, *s2
 *
 ******************************************************************************/
int my_strcmp (const char *s1, const char *s2);

/***************************************************************************//**
 * @brief resetEFM8
 *
 * @param Nothing
 ******************************************************************************/
void resetEFM8 ( void );

#endif /* INC_UTIL_H_ */
