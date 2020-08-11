/*
 * stm32f407.._gpio_driver.h
 *
 *  Created on: Aug 11, 2020
 *      Author: P.Ghatge
 */

#ifndef INC_STM32F407XX_GPIO_DRIVER_H_
#define INC_STM32F407XX_GPIO_DRIVER_H_

#include "stm32f407xx.h"

/*
 * This is Configuration structure for a GPIO pin
 */

typedef struct
{
	uint8_t GPIO_PinNumber;
	uint8_t GPIO_PinMode;
	uint8_t GPIO_PinSpeed;
	uint8_t GPIO_PinPuPdControl;
	uint8_t GPIO_PinOPType;
	uint8_t GPIO_PinAltFunMode;

}GPIO_PinConfig_t;



/*
 * This is Handle structure for a GPIO pin
 */

typedef struct
{
	GPIO_RegDef_t *pGPIOx;                       /*< This holds base address of the GPIO port to which the pin belongs >*/
	GPIO_PinConfig_t GPIO_PinConfig;             /*< This holds GPIO pin configuration settings >*/

}GPIO_Handle_t;


/*
 * APIs supported bythis driver
 */
void GPIO_Init(void);
void GPIO_DeInit(void);
void GPIO_PeriClockControl(void);
void GPIO_ReadFromInputPin(void);
void GPIO_ReadFromInputPort(void);
void GPIO_WriteToOutputPin(void);
void GPIO_WriteToOutputPort(void);
void GPIO_ToggleOutputPin(void);
void GPIO_IRQConfig(void);
void GPIO_IRQPriorityConfig(void);
void GPIO_IRQHandling(void);


#endif /* INC_STM32F407XX_GPIO_DRIVER_H_ */
