#include <stdint.h>
#include "driverlib/gpio.h"

/* Función básica: inicializa un LED y lo hace parpadear */
void LED_Init(void)
{
    /* Habilita el reloj del puerto F */
    /* Espera a que el periférico esté listo */
    /* Configura PF1 (LED rojo) como salida */
}

int main(void)
{
    /* Configura el reloj del sistema a 16 MHz (osc interno) */
    LED_Init();
    
    while(1)
    {
        /* Enciende LED */
        /* Apaga LED */
    }
}