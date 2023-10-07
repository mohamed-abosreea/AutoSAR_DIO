/*
 * imported_types.h
 *
 *  Created on: Oct 7, 2023
 *      Author: Mohamed Abosreea
 */

#ifndef IMPORTED_TYPES_H_
#define IMPORTED_TYPES_H_

#define SET_BIT(REG  , BIT)     (REG |= (1<<BIT))
#define CLEAR_BIT(REG  , BIT)   (REG &= ~(1<<BIT))
#define TOGGLE_BIT(REG  , BIT)  (REG ^= (1<<BIT))
#define GET_BIT(REG  , BIT)     ((REG >> BIT) & 1)
#define MODIFY_BIT(REG, BIT, VALUE) ((REG) = ((REG) & ~(1 << (BIT))) | ((VALUE) << (BIT)))


typedef unsigned char       uint8  ;
typedef unsigned short      uint16 ;
typedef unsigned int        uint32;
typedef unsigned long       uint64 ;

typedef signed char       sint8  ;
typedef signed short      sint16 ;
typedef signed int        sint32 ;
typedef signed long       sint64 ;

typedef float             f32 ;
typedef double            f64 ;

/*  Section : Macro declarations */
#define STD_HIGH    0x01
#define STD_LOW     0x00

#define STD_ON      0x01
#define STD_OFF     0x00

#define NULL ((void *)0)


/*  Section : Macro Functions declarations */

/*  Section : Data types declarations */
typedef enum
{
    OK = 1 ,
    N_OK = 0
}Err_check_t;


#endif /* IMPORTED_TYPES_H_ */
