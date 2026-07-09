#ifndef UART_HAL_H
#define UART_HAL_H

#include "main.h"
#include "usart.h"

class UART
{
public:
    UART(USART_HandleTypeDef *huart);
    ~UART();

    HAL_StatusTypeDef write(uint8_t *data,
                            uint16_t size,
                            uint32_t timeout = HAL_MAX_DELAY);

    HAL_StatusTypeDef read(uint8_t *data,
                           uint16_t size,
                           uint32_t timeout = HAL_MAX_DELAY);

private:
    USART_HandleTypeDef *Instance;
};

#endif
