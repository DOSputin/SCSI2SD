/*******************************************************************************
* File Name: SD_DAT1.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_SD_DAT1_H) /* Pins SD_DAT1_H */
#define CY_PINS_SD_DAT1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "SD_DAT1_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 SD_DAT1__PORT == 15 && ((SD_DAT1__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    SD_DAT1_Write(uint8 value);
void    SD_DAT1_SetDriveMode(uint8 mode);
uint8   SD_DAT1_ReadDataReg(void);
uint8   SD_DAT1_Read(void);
void    SD_DAT1_SetInterruptMode(uint16 position, uint16 mode);
uint8   SD_DAT1_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the SD_DAT1_SetDriveMode() function.
     *  @{
     */
        #define SD_DAT1_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define SD_DAT1_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define SD_DAT1_DM_RES_UP          PIN_DM_RES_UP
        #define SD_DAT1_DM_RES_DWN         PIN_DM_RES_DWN
        #define SD_DAT1_DM_OD_LO           PIN_DM_OD_LO
        #define SD_DAT1_DM_OD_HI           PIN_DM_OD_HI
        #define SD_DAT1_DM_STRONG          PIN_DM_STRONG
        #define SD_DAT1_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define SD_DAT1_MASK               SD_DAT1__MASK
#define SD_DAT1_SHIFT              SD_DAT1__SHIFT
#define SD_DAT1_WIDTH              1u

/* Interrupt constants */
#if defined(SD_DAT1__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in SD_DAT1_SetInterruptMode() function.
     *  @{
     */
        #define SD_DAT1_INTR_NONE      (uint16)(0x0000u)
        #define SD_DAT1_INTR_RISING    (uint16)(0x0001u)
        #define SD_DAT1_INTR_FALLING   (uint16)(0x0002u)
        #define SD_DAT1_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define SD_DAT1_INTR_MASK      (0x01u) 
#endif /* (SD_DAT1__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define SD_DAT1_PS                     (* (reg8 *) SD_DAT1__PS)
/* Data Register */
#define SD_DAT1_DR                     (* (reg8 *) SD_DAT1__DR)
/* Port Number */
#define SD_DAT1_PRT_NUM                (* (reg8 *) SD_DAT1__PRT) 
/* Connect to Analog Globals */                                                  
#define SD_DAT1_AG                     (* (reg8 *) SD_DAT1__AG)                       
/* Analog MUX bux enable */
#define SD_DAT1_AMUX                   (* (reg8 *) SD_DAT1__AMUX) 
/* Bidirectional Enable */                                                        
#define SD_DAT1_BIE                    (* (reg8 *) SD_DAT1__BIE)
/* Bit-mask for Aliased Register Access */
#define SD_DAT1_BIT_MASK               (* (reg8 *) SD_DAT1__BIT_MASK)
/* Bypass Enable */
#define SD_DAT1_BYP                    (* (reg8 *) SD_DAT1__BYP)
/* Port wide control signals */                                                   
#define SD_DAT1_CTL                    (* (reg8 *) SD_DAT1__CTL)
/* Drive Modes */
#define SD_DAT1_DM0                    (* (reg8 *) SD_DAT1__DM0) 
#define SD_DAT1_DM1                    (* (reg8 *) SD_DAT1__DM1)
#define SD_DAT1_DM2                    (* (reg8 *) SD_DAT1__DM2) 
/* Input Buffer Disable Override */
#define SD_DAT1_INP_DIS                (* (reg8 *) SD_DAT1__INP_DIS)
/* LCD Common or Segment Drive */
#define SD_DAT1_LCD_COM_SEG            (* (reg8 *) SD_DAT1__LCD_COM_SEG)
/* Enable Segment LCD */
#define SD_DAT1_LCD_EN                 (* (reg8 *) SD_DAT1__LCD_EN)
/* Slew Rate Control */
#define SD_DAT1_SLW                    (* (reg8 *) SD_DAT1__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define SD_DAT1_PRTDSI__CAPS_SEL       (* (reg8 *) SD_DAT1__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define SD_DAT1_PRTDSI__DBL_SYNC_IN    (* (reg8 *) SD_DAT1__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define SD_DAT1_PRTDSI__OE_SEL0        (* (reg8 *) SD_DAT1__PRTDSI__OE_SEL0) 
#define SD_DAT1_PRTDSI__OE_SEL1        (* (reg8 *) SD_DAT1__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define SD_DAT1_PRTDSI__OUT_SEL0       (* (reg8 *) SD_DAT1__PRTDSI__OUT_SEL0) 
#define SD_DAT1_PRTDSI__OUT_SEL1       (* (reg8 *) SD_DAT1__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define SD_DAT1_PRTDSI__SYNC_OUT       (* (reg8 *) SD_DAT1__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(SD_DAT1__SIO_CFG)
    #define SD_DAT1_SIO_HYST_EN        (* (reg8 *) SD_DAT1__SIO_HYST_EN)
    #define SD_DAT1_SIO_REG_HIFREQ     (* (reg8 *) SD_DAT1__SIO_REG_HIFREQ)
    #define SD_DAT1_SIO_CFG            (* (reg8 *) SD_DAT1__SIO_CFG)
    #define SD_DAT1_SIO_DIFF           (* (reg8 *) SD_DAT1__SIO_DIFF)
#endif /* (SD_DAT1__SIO_CFG) */

/* Interrupt Registers */
#if defined(SD_DAT1__INTSTAT)
    #define SD_DAT1_INTSTAT            (* (reg8 *) SD_DAT1__INTSTAT)
    #define SD_DAT1_SNAP               (* (reg8 *) SD_DAT1__SNAP)
    
	#define SD_DAT1_0_INTTYPE_REG 		(* (reg8 *) SD_DAT1__0__INTTYPE)
#endif /* (SD_DAT1__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_SD_DAT1_H */


/* [] END OF FILE */
