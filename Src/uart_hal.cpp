#include "uart_hal.h"

UART::UART(USART_HandleTypeDef *huart)
{
	Instance = huart;
}

UART::~UART()
{

}

HAL_StatusTypeDef UART::write(uint8_t *data,
                              uint16_t size,
                              uint32_t timeout)
{
    return HAL_USART_Transmit(
    		Instance,
            data,
            size,
            timeout);
}

HAL_StatusTypeDef UART::read(uint8_t *data,
                             uint16_t size,
                             uint32_t timeout)
{
    return HAL_USART_Receive(
    		Instance,
            data,
            size,
            timeout);
}
