/*
 * This header provides constants for binding nvidia,tegra*-gpio.
 *
 * The first cell in Tegra's GPIO specifier is the GPIO ID. The macros below
 * provide names for this.
 *
 * The second cell contains standard flag values specified in gpio.h.
 */

#ifndef _DT_BINDINGS_GPIO_TEGRA_GPIO_H
#define _DT_BINDINGS_GPIO_TEGRA_GPIO_H

#include <dt-bindings/gpio/gpio.h>

/* Nomral Non-AON GPIOs */
#define TEGRA_GPIO_BANK_ID_A 0
#define TEGRA_GPIO_BANK_ID_B 1
#define TEGRA_GPIO_BANK_ID_C 2
#define TEGRA_GPIO_BANK_ID_D 3
#define TEGRA_GPIO_BANK_ID_E 4
#define TEGRA_GPIO_BANK_ID_F 5
#define TEGRA_GPIO_BANK_ID_G 6
#define TEGRA_GPIO_BANK_ID_H 7
#define TEGRA_GPIO_BANK_ID_I 8
#define TEGRA_GPIO_BANK_ID_J 9
#define TEGRA_GPIO_BANK_ID_K 10
#define TEGRA_GPIO_BANK_ID_L 11
#define TEGRA_GPIO_BANK_ID_M 12
#define TEGRA_GPIO_BANK_ID_N 13
#define TEGRA_GPIO_BANK_ID_O 14
#define TEGRA_GPIO_BANK_ID_P 15
#define TEGRA_GPIO_BANK_ID_Q 16
#define TEGRA_GPIO_BANK_ID_R 17
#define TEGRA_GPIO_BANK_ID_T 18
#define TEGRA_GPIO_BANK_ID_X 19
#define TEGRA_GPIO_BANK_ID_Y 20
#define TEGRA_GPIO_BANK_ID_BB 21
#define TEGRA_GPIO_BANK_ID_CC 22
#define TEGRA_GPIO_BANK_ID_DD 23

/* AON GPIOs */
#define TEGRA_AON_GPIO_BANK_ID_S 0
#define TEGRA_AON_GPIO_BANK_ID_U 1
#define TEGRA_AON_GPIO_BANK_ID_V 2
#define TEGRA_AON_GPIO_BANK_ID_W 3
#define TEGRA_AON_GPIO_BANK_ID_Z 4
#define TEGRA_AON_GPIO_BANK_ID_AA 5
#define TEGRA_AON_GPIO_BANK_ID_EE 6
#define TEGRA_AON_GPIO_BANK_ID_FF 7

/* All pins */
#define TEGRA_PIN_BASE_ID_A 0
#define TEGRA_PIN_BASE_ID_B 1
#define TEGRA_PIN_BASE_ID_C 2
#define TEGRA_PIN_BASE_ID_D 3
#define TEGRA_PIN_BASE_ID_E 4
#define TEGRA_PIN_BASE_ID_F 5
#define TEGRA_PIN_BASE_ID_G 6
#define TEGRA_PIN_BASE_ID_H 7
#define TEGRA_PIN_BASE_ID_I 8
#define TEGRA_PIN_BASE_ID_J 9
#define TEGRA_PIN_BASE_ID_K 10
#define TEGRA_PIN_BASE_ID_L 11
#define TEGRA_PIN_BASE_ID_M 12
#define TEGRA_PIN_BASE_ID_N 13
#define TEGRA_PIN_BASE_ID_O 14
#define TEGRA_PIN_BASE_ID_P 15
#define TEGRA_PIN_BASE_ID_Q 16
#define TEGRA_PIN_BASE_ID_R 17
#define TEGRA_PIN_BASE_ID_S 18
#define TEGRA_PIN_BASE_ID_T 19
#define TEGRA_PIN_BASE_ID_U 20
#define TEGRA_PIN_BASE_ID_V 21
#define TEGRA_PIN_BASE_ID_W 22
#define TEGRA_PIN_BASE_ID_X 23
#define TEGRA_PIN_BASE_ID_Y 24
#define TEGRA_PIN_BASE_ID_Z 25
#define TEGRA_PIN_BASE_ID_AA 26
#define TEGRA_PIN_BASE_ID_BB 27
#define TEGRA_PIN_BASE_ID_CC 28
#define TEGRA_PIN_BASE_ID_DD 29
#define TEGRA_PIN_BASE_ID_EE 30
#define TEGRA_PIN_BASE_ID_FF 31

#define TEGRA_GPIO_RANGE(st, end) \
	((TEGRA_GPIO_BANK_ID_##end - TEGRA_GPIO_BANK_ID_##st + 1) * 8)
#define TEGRA_PIN_BASE(port) (TEGRA_PIN_BASE_ID_##port * 8)
#define TEGRA_GPIO_BASE(port) (TEGRA_GPIO_BANK_ID_##port * 8)

#define TEGRA_AON_GPIO_RANGE(st, end) \
	((TEGRA_AON_GPIO_BANK_ID_##end - TEGRA_AON_GPIO_BANK_ID_##st + 1) * 8)
#define TEGRA_AON_GPIO_BASE(port) (TEGRA_AON_GPIO_BANK_ID_##port * 8)

#define TEGRA_GPIO(bank, offset) \
	((TEGRA_GPIO_BANK_ID_##bank * 8) + offset)

#define TEGRA_GPIO_AON(bank, offset) \
	((TEGRA_AON_GPIO_BANK_ID_##bank * 8) + offset)

#endif