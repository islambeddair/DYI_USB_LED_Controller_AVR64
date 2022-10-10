/*
 * Code generated from START.
 *
 * This file will be overwritten when reconfiguring your START project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef ATMEL_START_PINS_H_INCLUDED
#define ATMEL_START_PINS_H_INCLUDED

#include <port.h>

/**
 * \brief Set DIP0 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void DIP0_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set DIP0 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void DIP0_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(0, dir);
}

/**
 * \brief Set DIP0 input/sense configuration
 *
 * Enable/disable DIP0 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void DIP0_set_isc(const PORT_ISC_t isc)
{
	PORTA_pin_set_isc(0, isc);
}

/**
 * \brief Set DIP0 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on DIP0 is inverted
 *                     false = I/O on DIP0 is not inverted
 */
static inline void DIP0_set_inverted(const bool inverted)
{
	PORTA_pin_set_inverted(0, inverted);
}

/**
 * \brief Set DIP0 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void DIP0_set_level(const bool level)
{
	PORTA_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on DIP0
 *
 * Toggle the pin level
 */
static inline void DIP0_toggle_level()
{
	PORTA_toggle_pin_level(0);
}

/**
 * \brief Get level on DIP0
 *
 * Reads the level on a pin
 */
static inline bool DIP0_get_level()
{
	return PORTA_get_pin_level(0);
}

/**
 * \brief Set DIP1 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void DIP1_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set DIP1 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void DIP1_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(1, dir);
}

/**
 * \brief Set DIP1 input/sense configuration
 *
 * Enable/disable DIP1 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void DIP1_set_isc(const PORT_ISC_t isc)
{
	PORTA_pin_set_isc(1, isc);
}

/**
 * \brief Set DIP1 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on DIP1 is inverted
 *                     false = I/O on DIP1 is not inverted
 */
static inline void DIP1_set_inverted(const bool inverted)
{
	PORTA_pin_set_inverted(1, inverted);
}

/**
 * \brief Set DIP1 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void DIP1_set_level(const bool level)
{
	PORTA_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on DIP1
 *
 * Toggle the pin level
 */
static inline void DIP1_toggle_level()
{
	PORTA_toggle_pin_level(1);
}

/**
 * \brief Get level on DIP1
 *
 * Reads the level on a pin
 */
static inline bool DIP1_get_level()
{
	return PORTA_get_pin_level(1);
}

/**
 * \brief Set DIP2 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void DIP2_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set DIP2 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void DIP2_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(2, dir);
}

/**
 * \brief Set DIP2 input/sense configuration
 *
 * Enable/disable DIP2 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void DIP2_set_isc(const PORT_ISC_t isc)
{
	PORTA_pin_set_isc(2, isc);
}

/**
 * \brief Set DIP2 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on DIP2 is inverted
 *                     false = I/O on DIP2 is not inverted
 */
static inline void DIP2_set_inverted(const bool inverted)
{
	PORTA_pin_set_inverted(2, inverted);
}

/**
 * \brief Set DIP2 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void DIP2_set_level(const bool level)
{
	PORTA_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on DIP2
 *
 * Toggle the pin level
 */
static inline void DIP2_toggle_level()
{
	PORTA_toggle_pin_level(2);
}

/**
 * \brief Get level on DIP2
 *
 * Reads the level on a pin
 */
static inline bool DIP2_get_level()
{
	return PORTA_get_pin_level(2);
}

/**
 * \brief Set DIP3 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void DIP3_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set DIP3 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void DIP3_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(3, dir);
}

/**
 * \brief Set DIP3 input/sense configuration
 *
 * Enable/disable DIP3 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void DIP3_set_isc(const PORT_ISC_t isc)
{
	PORTA_pin_set_isc(3, isc);
}

/**
 * \brief Set DIP3 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on DIP3 is inverted
 *                     false = I/O on DIP3 is not inverted
 */
static inline void DIP3_set_inverted(const bool inverted)
{
	PORTA_pin_set_inverted(3, inverted);
}

/**
 * \brief Set DIP3 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void DIP3_set_level(const bool level)
{
	PORTA_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on DIP3
 *
 * Toggle the pin level
 */
static inline void DIP3_toggle_level()
{
	PORTA_toggle_pin_level(3);
}

/**
 * \brief Get level on DIP3
 *
 * Reads the level on a pin
 */
static inline bool DIP3_get_level()
{
	return PORTA_get_pin_level(3);
}

/**
 * \brief Set PA4 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PA4_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set PA4 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PA4_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(4, dir);
}

/**
 * \brief Set PA4 input/sense configuration
 *
 * Enable/disable PA4 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void PA4_set_isc(const PORT_ISC_t isc)
{
	PORTA_pin_set_isc(4, isc);
}

/**
 * \brief Set PA4 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on PA4 is inverted
 *                     false = I/O on PA4 is not inverted
 */
static inline void PA4_set_inverted(const bool inverted)
{
	PORTA_pin_set_inverted(4, inverted);
}

/**
 * \brief Set PA4 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PA4_set_level(const bool level)
{
	PORTA_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on PA4
 *
 * Toggle the pin level
 */
static inline void PA4_toggle_level()
{
	PORTA_toggle_pin_level(4);
}

/**
 * \brief Get level on PA4
 *
 * Reads the level on a pin
 */
static inline bool PA4_get_level()
{
	return PORTA_get_pin_level(4);
}

/**
 * \brief Set PA5 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PA5_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set PA5 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PA5_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(5, dir);
}

/**
 * \brief Set PA5 input/sense configuration
 *
 * Enable/disable PA5 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void PA5_set_isc(const PORT_ISC_t isc)
{
	PORTA_pin_set_isc(5, isc);
}

/**
 * \brief Set PA5 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on PA5 is inverted
 *                     false = I/O on PA5 is not inverted
 */
static inline void PA5_set_inverted(const bool inverted)
{
	PORTA_pin_set_inverted(5, inverted);
}

/**
 * \brief Set PA5 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PA5_set_level(const bool level)
{
	PORTA_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on PA5
 *
 * Toggle the pin level
 */
static inline void PA5_toggle_level()
{
	PORTA_toggle_pin_level(5);
}

/**
 * \brief Get level on PA5
 *
 * Reads the level on a pin
 */
static inline bool PA5_get_level()
{
	return PORTA_get_pin_level(5);
}

/**
 * \brief Set R8 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void R8_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(6, pull_mode);
}

/**
 * \brief Set R8 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void R8_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(6, dir);
}

/**
 * \brief Set R8 input/sense configuration
 *
 * Enable/disable R8 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void R8_set_isc(const PORT_ISC_t isc)
{
	PORTA_pin_set_isc(6, isc);
}

/**
 * \brief Set R8 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on R8 is inverted
 *                     false = I/O on R8 is not inverted
 */
static inline void R8_set_inverted(const bool inverted)
{
	PORTA_pin_set_inverted(6, inverted);
}

/**
 * \brief Set R8 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void R8_set_level(const bool level)
{
	PORTA_set_pin_level(6, level);
}

/**
 * \brief Toggle output level on R8
 *
 * Toggle the pin level
 */
static inline void R8_toggle_level()
{
	PORTA_toggle_pin_level(6);
}

/**
 * \brief Get level on R8
 *
 * Reads the level on a pin
 */
static inline bool R8_get_level()
{
	return PORTA_get_pin_level(6);
}

/**
 * \brief Set status_led pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void status_led_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(7, pull_mode);
}

/**
 * \brief Set status_led data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void status_led_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(7, dir);
}

/**
 * \brief Set status_led input/sense configuration
 *
 * Enable/disable status_led digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void status_led_set_isc(const PORT_ISC_t isc)
{
	PORTA_pin_set_isc(7, isc);
}

/**
 * \brief Set status_led inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on status_led is inverted
 *                     false = I/O on status_led is not inverted
 */
static inline void status_led_set_inverted(const bool inverted)
{
	PORTA_pin_set_inverted(7, inverted);
}

/**
 * \brief Set status_led level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void status_led_set_level(const bool level)
{
	PORTA_set_pin_level(7, level);
}

/**
 * \brief Toggle output level on status_led
 *
 * Toggle the pin level
 */
static inline void status_led_toggle_level()
{
	PORTA_toggle_pin_level(7);
}

/**
 * \brief Get level on status_led
 *
 * Reads the level on a pin
 */
static inline bool status_led_get_level()
{
	return PORTA_get_pin_level(7);
}

/**
 * \brief Set PB0 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PB0_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set PB0 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PB0_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(0, dir);
}

/**
 * \brief Set PB0 input/sense configuration
 *
 * Enable/disable PB0 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void PB0_set_isc(const PORT_ISC_t isc)
{
	PORTB_pin_set_isc(0, isc);
}

/**
 * \brief Set PB0 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on PB0 is inverted
 *                     false = I/O on PB0 is not inverted
 */
static inline void PB0_set_inverted(const bool inverted)
{
	PORTB_pin_set_inverted(0, inverted);
}

/**
 * \brief Set PB0 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PB0_set_level(const bool level)
{
	PORTB_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on PB0
 *
 * Toggle the pin level
 */
static inline void PB0_toggle_level()
{
	PORTB_toggle_pin_level(0);
}

/**
 * \brief Get level on PB0
 *
 * Reads the level on a pin
 */
static inline bool PB0_get_level()
{
	return PORTB_get_pin_level(0);
}

/**
 * \brief Set PB1 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PB1_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set PB1 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PB1_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(1, dir);
}

/**
 * \brief Set PB1 input/sense configuration
 *
 * Enable/disable PB1 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void PB1_set_isc(const PORT_ISC_t isc)
{
	PORTB_pin_set_isc(1, isc);
}

/**
 * \brief Set PB1 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on PB1 is inverted
 *                     false = I/O on PB1 is not inverted
 */
static inline void PB1_set_inverted(const bool inverted)
{
	PORTB_pin_set_inverted(1, inverted);
}

/**
 * \brief Set PB1 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PB1_set_level(const bool level)
{
	PORTB_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on PB1
 *
 * Toggle the pin level
 */
static inline void PB1_toggle_level()
{
	PORTB_toggle_pin_level(1);
}

/**
 * \brief Get level on PB1
 *
 * Reads the level on a pin
 */
static inline bool PB1_get_level()
{
	return PORTB_get_pin_level(1);
}

/**
 * \brief Set PB2 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PB2_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set PB2 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PB2_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(2, dir);
}

/**
 * \brief Set PB2 input/sense configuration
 *
 * Enable/disable PB2 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void PB2_set_isc(const PORT_ISC_t isc)
{
	PORTB_pin_set_isc(2, isc);
}

/**
 * \brief Set PB2 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on PB2 is inverted
 *                     false = I/O on PB2 is not inverted
 */
static inline void PB2_set_inverted(const bool inverted)
{
	PORTB_pin_set_inverted(2, inverted);
}

/**
 * \brief Set PB2 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PB2_set_level(const bool level)
{
	PORTB_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on PB2
 *
 * Toggle the pin level
 */
static inline void PB2_toggle_level()
{
	PORTB_toggle_pin_level(2);
}

/**
 * \brief Get level on PB2
 *
 * Reads the level on a pin
 */
static inline bool PB2_get_level()
{
	return PORTB_get_pin_level(2);
}

/**
 * \brief Set PB3 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PB3_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set PB3 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PB3_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(3, dir);
}

/**
 * \brief Set PB3 input/sense configuration
 *
 * Enable/disable PB3 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void PB3_set_isc(const PORT_ISC_t isc)
{
	PORTB_pin_set_isc(3, isc);
}

/**
 * \brief Set PB3 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on PB3 is inverted
 *                     false = I/O on PB3 is not inverted
 */
static inline void PB3_set_inverted(const bool inverted)
{
	PORTB_pin_set_inverted(3, inverted);
}

/**
 * \brief Set PB3 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PB3_set_level(const bool level)
{
	PORTB_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on PB3
 *
 * Toggle the pin level
 */
static inline void PB3_toggle_level()
{
	PORTB_toggle_pin_level(3);
}

/**
 * \brief Get level on PB3
 *
 * Reads the level on a pin
 */
static inline bool PB3_get_level()
{
	return PORTB_get_pin_level(3);
}

/**
 * \brief Set W1 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void W1_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set W1 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void W1_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(4, dir);
}

/**
 * \brief Set W1 input/sense configuration
 *
 * Enable/disable W1 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void W1_set_isc(const PORT_ISC_t isc)
{
	PORTB_pin_set_isc(4, isc);
}

/**
 * \brief Set W1 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on W1 is inverted
 *                     false = I/O on W1 is not inverted
 */
static inline void W1_set_inverted(const bool inverted)
{
	PORTB_pin_set_inverted(4, inverted);
}

/**
 * \brief Set W1 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void W1_set_level(const bool level)
{
	PORTB_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on W1
 *
 * Toggle the pin level
 */
static inline void W1_toggle_level()
{
	PORTB_toggle_pin_level(4);
}

/**
 * \brief Get level on W1
 *
 * Reads the level on a pin
 */
static inline bool W1_get_level()
{
	return PORTB_get_pin_level(4);
}

/**
 * \brief Set B1 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void B1_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set B1 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void B1_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(5, dir);
}

/**
 * \brief Set B1 input/sense configuration
 *
 * Enable/disable B1 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void B1_set_isc(const PORT_ISC_t isc)
{
	PORTB_pin_set_isc(5, isc);
}

/**
 * \brief Set B1 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on B1 is inverted
 *                     false = I/O on B1 is not inverted
 */
static inline void B1_set_inverted(const bool inverted)
{
	PORTB_pin_set_inverted(5, inverted);
}

/**
 * \brief Set B1 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void B1_set_level(const bool level)
{
	PORTB_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on B1
 *
 * Toggle the pin level
 */
static inline void B1_toggle_level()
{
	PORTB_toggle_pin_level(5);
}

/**
 * \brief Get level on B1
 *
 * Reads the level on a pin
 */
static inline bool B1_get_level()
{
	return PORTB_get_pin_level(5);
}

/**
 * \brief Set G1 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void G1_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(6, pull_mode);
}

/**
 * \brief Set G1 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void G1_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(6, dir);
}

/**
 * \brief Set G1 input/sense configuration
 *
 * Enable/disable G1 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void G1_set_isc(const PORT_ISC_t isc)
{
	PORTB_pin_set_isc(6, isc);
}

/**
 * \brief Set G1 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on G1 is inverted
 *                     false = I/O on G1 is not inverted
 */
static inline void G1_set_inverted(const bool inverted)
{
	PORTB_pin_set_inverted(6, inverted);
}

/**
 * \brief Set G1 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void G1_set_level(const bool level)
{
	PORTB_set_pin_level(6, level);
}

/**
 * \brief Toggle output level on G1
 *
 * Toggle the pin level
 */
static inline void G1_toggle_level()
{
	PORTB_toggle_pin_level(6);
}

/**
 * \brief Get level on G1
 *
 * Reads the level on a pin
 */
static inline bool G1_get_level()
{
	return PORTB_get_pin_level(6);
}

/**
 * \brief Set R1 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void R1_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(7, pull_mode);
}

/**
 * \brief Set R1 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void R1_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(7, dir);
}

/**
 * \brief Set R1 input/sense configuration
 *
 * Enable/disable R1 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void R1_set_isc(const PORT_ISC_t isc)
{
	PORTB_pin_set_isc(7, isc);
}

/**
 * \brief Set R1 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on R1 is inverted
 *                     false = I/O on R1 is not inverted
 */
static inline void R1_set_inverted(const bool inverted)
{
	PORTB_pin_set_inverted(7, inverted);
}

/**
 * \brief Set R1 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void R1_set_level(const bool level)
{
	PORTB_set_pin_level(7, level);
}

/**
 * \brief Toggle output level on R1
 *
 * Toggle the pin level
 */
static inline void R1_toggle_level()
{
	PORTB_toggle_pin_level(7);
}

/**
 * \brief Get level on R1
 *
 * Reads the level on a pin
 */
static inline bool R1_get_level()
{
	return PORTB_get_pin_level(7);
}

/**
 * \brief Set W2 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void W2_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set W2 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void W2_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(0, dir);
}

/**
 * \brief Set W2 input/sense configuration
 *
 * Enable/disable W2 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void W2_set_isc(const PORT_ISC_t isc)
{
	PORTC_pin_set_isc(0, isc);
}

/**
 * \brief Set W2 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on W2 is inverted
 *                     false = I/O on W2 is not inverted
 */
static inline void W2_set_inverted(const bool inverted)
{
	PORTC_pin_set_inverted(0, inverted);
}

/**
 * \brief Set W2 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void W2_set_level(const bool level)
{
	PORTC_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on W2
 *
 * Toggle the pin level
 */
static inline void W2_toggle_level()
{
	PORTC_toggle_pin_level(0);
}

/**
 * \brief Get level on W2
 *
 * Reads the level on a pin
 */
static inline bool W2_get_level()
{
	return PORTC_get_pin_level(0);
}

/**
 * \brief Set B2 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void B2_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set B2 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void B2_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(1, dir);
}

/**
 * \brief Set B2 input/sense configuration
 *
 * Enable/disable B2 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void B2_set_isc(const PORT_ISC_t isc)
{
	PORTC_pin_set_isc(1, isc);
}

/**
 * \brief Set B2 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on B2 is inverted
 *                     false = I/O on B2 is not inverted
 */
static inline void B2_set_inverted(const bool inverted)
{
	PORTC_pin_set_inverted(1, inverted);
}

/**
 * \brief Set B2 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void B2_set_level(const bool level)
{
	PORTC_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on B2
 *
 * Toggle the pin level
 */
static inline void B2_toggle_level()
{
	PORTC_toggle_pin_level(1);
}

/**
 * \brief Get level on B2
 *
 * Reads the level on a pin
 */
static inline bool B2_get_level()
{
	return PORTC_get_pin_level(1);
}

/**
 * \brief Set G2 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void G2_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set G2 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void G2_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(2, dir);
}

/**
 * \brief Set G2 input/sense configuration
 *
 * Enable/disable G2 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void G2_set_isc(const PORT_ISC_t isc)
{
	PORTC_pin_set_isc(2, isc);
}

/**
 * \brief Set G2 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on G2 is inverted
 *                     false = I/O on G2 is not inverted
 */
static inline void G2_set_inverted(const bool inverted)
{
	PORTC_pin_set_inverted(2, inverted);
}

/**
 * \brief Set G2 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void G2_set_level(const bool level)
{
	PORTC_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on G2
 *
 * Toggle the pin level
 */
static inline void G2_toggle_level()
{
	PORTC_toggle_pin_level(2);
}

/**
 * \brief Get level on G2
 *
 * Reads the level on a pin
 */
static inline bool G2_get_level()
{
	return PORTC_get_pin_level(2);
}

/**
 * \brief Set R2 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void R2_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set R2 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void R2_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(3, dir);
}

/**
 * \brief Set R2 input/sense configuration
 *
 * Enable/disable R2 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void R2_set_isc(const PORT_ISC_t isc)
{
	PORTC_pin_set_isc(3, isc);
}

/**
 * \brief Set R2 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on R2 is inverted
 *                     false = I/O on R2 is not inverted
 */
static inline void R2_set_inverted(const bool inverted)
{
	PORTC_pin_set_inverted(3, inverted);
}

/**
 * \brief Set R2 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void R2_set_level(const bool level)
{
	PORTC_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on R2
 *
 * Toggle the pin level
 */
static inline void R2_toggle_level()
{
	PORTC_toggle_pin_level(3);
}

/**
 * \brief Get level on R2
 *
 * Reads the level on a pin
 */
static inline bool R2_get_level()
{
	return PORTC_get_pin_level(3);
}

/**
 * \brief Set W3 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void W3_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set W3 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void W3_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(4, dir);
}

/**
 * \brief Set W3 input/sense configuration
 *
 * Enable/disable W3 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void W3_set_isc(const PORT_ISC_t isc)
{
	PORTC_pin_set_isc(4, isc);
}

/**
 * \brief Set W3 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on W3 is inverted
 *                     false = I/O on W3 is not inverted
 */
static inline void W3_set_inverted(const bool inverted)
{
	PORTC_pin_set_inverted(4, inverted);
}

/**
 * \brief Set W3 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void W3_set_level(const bool level)
{
	PORTC_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on W3
 *
 * Toggle the pin level
 */
static inline void W3_toggle_level()
{
	PORTC_toggle_pin_level(4);
}

/**
 * \brief Get level on W3
 *
 * Reads the level on a pin
 */
static inline bool W3_get_level()
{
	return PORTC_get_pin_level(4);
}

/**
 * \brief Set B3 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void B3_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set B3 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void B3_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(5, dir);
}

/**
 * \brief Set B3 input/sense configuration
 *
 * Enable/disable B3 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void B3_set_isc(const PORT_ISC_t isc)
{
	PORTC_pin_set_isc(5, isc);
}

/**
 * \brief Set B3 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on B3 is inverted
 *                     false = I/O on B3 is not inverted
 */
static inline void B3_set_inverted(const bool inverted)
{
	PORTC_pin_set_inverted(5, inverted);
}

/**
 * \brief Set B3 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void B3_set_level(const bool level)
{
	PORTC_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on B3
 *
 * Toggle the pin level
 */
static inline void B3_toggle_level()
{
	PORTC_toggle_pin_level(5);
}

/**
 * \brief Get level on B3
 *
 * Reads the level on a pin
 */
static inline bool B3_get_level()
{
	return PORTC_get_pin_level(5);
}

/**
 * \brief Set G3 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void G3_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(6, pull_mode);
}

/**
 * \brief Set G3 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void G3_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(6, dir);
}

/**
 * \brief Set G3 input/sense configuration
 *
 * Enable/disable G3 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void G3_set_isc(const PORT_ISC_t isc)
{
	PORTC_pin_set_isc(6, isc);
}

/**
 * \brief Set G3 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on G3 is inverted
 *                     false = I/O on G3 is not inverted
 */
static inline void G3_set_inverted(const bool inverted)
{
	PORTC_pin_set_inverted(6, inverted);
}

/**
 * \brief Set G3 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void G3_set_level(const bool level)
{
	PORTC_set_pin_level(6, level);
}

/**
 * \brief Toggle output level on G3
 *
 * Toggle the pin level
 */
static inline void G3_toggle_level()
{
	PORTC_toggle_pin_level(6);
}

/**
 * \brief Get level on G3
 *
 * Reads the level on a pin
 */
static inline bool G3_get_level()
{
	return PORTC_get_pin_level(6);
}

/**
 * \brief Set R3 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void R3_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(7, pull_mode);
}

/**
 * \brief Set R3 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void R3_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(7, dir);
}

/**
 * \brief Set R3 input/sense configuration
 *
 * Enable/disable R3 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void R3_set_isc(const PORT_ISC_t isc)
{
	PORTC_pin_set_isc(7, isc);
}

/**
 * \brief Set R3 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on R3 is inverted
 *                     false = I/O on R3 is not inverted
 */
static inline void R3_set_inverted(const bool inverted)
{
	PORTC_pin_set_inverted(7, inverted);
}

/**
 * \brief Set R3 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void R3_set_level(const bool level)
{
	PORTC_set_pin_level(7, level);
}

/**
 * \brief Toggle output level on R3
 *
 * Toggle the pin level
 */
static inline void R3_toggle_level()
{
	PORTC_toggle_pin_level(7);
}

/**
 * \brief Get level on R3
 *
 * Reads the level on a pin
 */
static inline bool R3_get_level()
{
	return PORTC_get_pin_level(7);
}

/**
 * \brief Set W4 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void W4_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set W4 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void W4_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(0, dir);
}

/**
 * \brief Set W4 input/sense configuration
 *
 * Enable/disable W4 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void W4_set_isc(const PORT_ISC_t isc)
{
	PORTD_pin_set_isc(0, isc);
}

/**
 * \brief Set W4 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on W4 is inverted
 *                     false = I/O on W4 is not inverted
 */
static inline void W4_set_inverted(const bool inverted)
{
	PORTD_pin_set_inverted(0, inverted);
}

/**
 * \brief Set W4 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void W4_set_level(const bool level)
{
	PORTD_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on W4
 *
 * Toggle the pin level
 */
static inline void W4_toggle_level()
{
	PORTD_toggle_pin_level(0);
}

/**
 * \brief Get level on W4
 *
 * Reads the level on a pin
 */
static inline bool W4_get_level()
{
	return PORTD_get_pin_level(0);
}

/**
 * \brief Set B4 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void B4_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set B4 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void B4_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(1, dir);
}

/**
 * \brief Set B4 input/sense configuration
 *
 * Enable/disable B4 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void B4_set_isc(const PORT_ISC_t isc)
{
	PORTD_pin_set_isc(1, isc);
}

/**
 * \brief Set B4 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on B4 is inverted
 *                     false = I/O on B4 is not inverted
 */
static inline void B4_set_inverted(const bool inverted)
{
	PORTD_pin_set_inverted(1, inverted);
}

/**
 * \brief Set B4 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void B4_set_level(const bool level)
{
	PORTD_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on B4
 *
 * Toggle the pin level
 */
static inline void B4_toggle_level()
{
	PORTD_toggle_pin_level(1);
}

/**
 * \brief Get level on B4
 *
 * Reads the level on a pin
 */
static inline bool B4_get_level()
{
	return PORTD_get_pin_level(1);
}

/**
 * \brief Set G4 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void G4_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set G4 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void G4_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(2, dir);
}

/**
 * \brief Set G4 input/sense configuration
 *
 * Enable/disable G4 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void G4_set_isc(const PORT_ISC_t isc)
{
	PORTD_pin_set_isc(2, isc);
}

/**
 * \brief Set G4 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on G4 is inverted
 *                     false = I/O on G4 is not inverted
 */
static inline void G4_set_inverted(const bool inverted)
{
	PORTD_pin_set_inverted(2, inverted);
}

/**
 * \brief Set G4 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void G4_set_level(const bool level)
{
	PORTD_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on G4
 *
 * Toggle the pin level
 */
static inline void G4_toggle_level()
{
	PORTD_toggle_pin_level(2);
}

/**
 * \brief Get level on G4
 *
 * Reads the level on a pin
 */
static inline bool G4_get_level()
{
	return PORTD_get_pin_level(2);
}

/**
 * \brief Set R4 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void R4_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set R4 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void R4_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(3, dir);
}

/**
 * \brief Set R4 input/sense configuration
 *
 * Enable/disable R4 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void R4_set_isc(const PORT_ISC_t isc)
{
	PORTD_pin_set_isc(3, isc);
}

/**
 * \brief Set R4 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on R4 is inverted
 *                     false = I/O on R4 is not inverted
 */
static inline void R4_set_inverted(const bool inverted)
{
	PORTD_pin_set_inverted(3, inverted);
}

/**
 * \brief Set R4 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void R4_set_level(const bool level)
{
	PORTD_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on R4
 *
 * Toggle the pin level
 */
static inline void R4_toggle_level()
{
	PORTD_toggle_pin_level(3);
}

/**
 * \brief Get level on R4
 *
 * Reads the level on a pin
 */
static inline bool R4_get_level()
{
	return PORTD_get_pin_level(3);
}

/**
 * \brief Set W5 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void W5_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set W5 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void W5_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(4, dir);
}

/**
 * \brief Set W5 input/sense configuration
 *
 * Enable/disable W5 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void W5_set_isc(const PORT_ISC_t isc)
{
	PORTD_pin_set_isc(4, isc);
}

/**
 * \brief Set W5 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on W5 is inverted
 *                     false = I/O on W5 is not inverted
 */
static inline void W5_set_inverted(const bool inverted)
{
	PORTD_pin_set_inverted(4, inverted);
}

/**
 * \brief Set W5 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void W5_set_level(const bool level)
{
	PORTD_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on W5
 *
 * Toggle the pin level
 */
static inline void W5_toggle_level()
{
	PORTD_toggle_pin_level(4);
}

/**
 * \brief Get level on W5
 *
 * Reads the level on a pin
 */
static inline bool W5_get_level()
{
	return PORTD_get_pin_level(4);
}

/**
 * \brief Set B5 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void B5_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set B5 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void B5_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(5, dir);
}

/**
 * \brief Set B5 input/sense configuration
 *
 * Enable/disable B5 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void B5_set_isc(const PORT_ISC_t isc)
{
	PORTD_pin_set_isc(5, isc);
}

/**
 * \brief Set B5 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on B5 is inverted
 *                     false = I/O on B5 is not inverted
 */
static inline void B5_set_inverted(const bool inverted)
{
	PORTD_pin_set_inverted(5, inverted);
}

/**
 * \brief Set B5 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void B5_set_level(const bool level)
{
	PORTD_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on B5
 *
 * Toggle the pin level
 */
static inline void B5_toggle_level()
{
	PORTD_toggle_pin_level(5);
}

/**
 * \brief Get level on B5
 *
 * Reads the level on a pin
 */
static inline bool B5_get_level()
{
	return PORTD_get_pin_level(5);
}

/**
 * \brief Set G5 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void G5_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(6, pull_mode);
}

/**
 * \brief Set G5 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void G5_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(6, dir);
}

/**
 * \brief Set G5 input/sense configuration
 *
 * Enable/disable G5 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void G5_set_isc(const PORT_ISC_t isc)
{
	PORTD_pin_set_isc(6, isc);
}

/**
 * \brief Set G5 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on G5 is inverted
 *                     false = I/O on G5 is not inverted
 */
static inline void G5_set_inverted(const bool inverted)
{
	PORTD_pin_set_inverted(6, inverted);
}

/**
 * \brief Set G5 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void G5_set_level(const bool level)
{
	PORTD_set_pin_level(6, level);
}

/**
 * \brief Toggle output level on G5
 *
 * Toggle the pin level
 */
static inline void G5_toggle_level()
{
	PORTD_toggle_pin_level(6);
}

/**
 * \brief Get level on G5
 *
 * Reads the level on a pin
 */
static inline bool G5_get_level()
{
	return PORTD_get_pin_level(6);
}

/**
 * \brief Set R5 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void R5_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(7, pull_mode);
}

/**
 * \brief Set R5 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void R5_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(7, dir);
}

/**
 * \brief Set R5 input/sense configuration
 *
 * Enable/disable R5 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void R5_set_isc(const PORT_ISC_t isc)
{
	PORTD_pin_set_isc(7, isc);
}

/**
 * \brief Set R5 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on R5 is inverted
 *                     false = I/O on R5 is not inverted
 */
static inline void R5_set_inverted(const bool inverted)
{
	PORTD_pin_set_inverted(7, inverted);
}

/**
 * \brief Set R5 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void R5_set_level(const bool level)
{
	PORTD_set_pin_level(7, level);
}

/**
 * \brief Toggle output level on R5
 *
 * Toggle the pin level
 */
static inline void R5_toggle_level()
{
	PORTD_toggle_pin_level(7);
}

/**
 * \brief Get level on R5
 *
 * Reads the level on a pin
 */
static inline bool R5_get_level()
{
	return PORTD_get_pin_level(7);
}

/**
 * \brief Set W6 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void W6_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTE_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set W6 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void W6_set_dir(const enum port_dir dir)
{
	PORTE_set_pin_dir(0, dir);
}

/**
 * \brief Set W6 input/sense configuration
 *
 * Enable/disable W6 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void W6_set_isc(const PORT_ISC_t isc)
{
	PORTE_pin_set_isc(0, isc);
}

/**
 * \brief Set W6 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on W6 is inverted
 *                     false = I/O on W6 is not inverted
 */
static inline void W6_set_inverted(const bool inverted)
{
	PORTE_pin_set_inverted(0, inverted);
}

/**
 * \brief Set W6 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void W6_set_level(const bool level)
{
	PORTE_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on W6
 *
 * Toggle the pin level
 */
static inline void W6_toggle_level()
{
	PORTE_toggle_pin_level(0);
}

/**
 * \brief Get level on W6
 *
 * Reads the level on a pin
 */
static inline bool W6_get_level()
{
	return PORTE_get_pin_level(0);
}

/**
 * \brief Set B6 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void B6_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTE_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set B6 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void B6_set_dir(const enum port_dir dir)
{
	PORTE_set_pin_dir(1, dir);
}

/**
 * \brief Set B6 input/sense configuration
 *
 * Enable/disable B6 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void B6_set_isc(const PORT_ISC_t isc)
{
	PORTE_pin_set_isc(1, isc);
}

/**
 * \brief Set B6 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on B6 is inverted
 *                     false = I/O on B6 is not inverted
 */
static inline void B6_set_inverted(const bool inverted)
{
	PORTE_pin_set_inverted(1, inverted);
}

/**
 * \brief Set B6 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void B6_set_level(const bool level)
{
	PORTE_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on B6
 *
 * Toggle the pin level
 */
static inline void B6_toggle_level()
{
	PORTE_toggle_pin_level(1);
}

/**
 * \brief Get level on B6
 *
 * Reads the level on a pin
 */
static inline bool B6_get_level()
{
	return PORTE_get_pin_level(1);
}

/**
 * \brief Set G6 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void G6_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTE_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set G6 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void G6_set_dir(const enum port_dir dir)
{
	PORTE_set_pin_dir(2, dir);
}

/**
 * \brief Set G6 input/sense configuration
 *
 * Enable/disable G6 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void G6_set_isc(const PORT_ISC_t isc)
{
	PORTE_pin_set_isc(2, isc);
}

/**
 * \brief Set G6 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on G6 is inverted
 *                     false = I/O on G6 is not inverted
 */
static inline void G6_set_inverted(const bool inverted)
{
	PORTE_pin_set_inverted(2, inverted);
}

/**
 * \brief Set G6 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void G6_set_level(const bool level)
{
	PORTE_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on G6
 *
 * Toggle the pin level
 */
static inline void G6_toggle_level()
{
	PORTE_toggle_pin_level(2);
}

/**
 * \brief Get level on G6
 *
 * Reads the level on a pin
 */
static inline bool G6_get_level()
{
	return PORTE_get_pin_level(2);
}

/**
 * \brief Set R6 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void R6_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTE_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set R6 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void R6_set_dir(const enum port_dir dir)
{
	PORTE_set_pin_dir(3, dir);
}

/**
 * \brief Set R6 input/sense configuration
 *
 * Enable/disable R6 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void R6_set_isc(const PORT_ISC_t isc)
{
	PORTE_pin_set_isc(3, isc);
}

/**
 * \brief Set R6 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on R6 is inverted
 *                     false = I/O on R6 is not inverted
 */
static inline void R6_set_inverted(const bool inverted)
{
	PORTE_pin_set_inverted(3, inverted);
}

/**
 * \brief Set R6 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void R6_set_level(const bool level)
{
	PORTE_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on R6
 *
 * Toggle the pin level
 */
static inline void R6_toggle_level()
{
	PORTE_toggle_pin_level(3);
}

/**
 * \brief Get level on R6
 *
 * Reads the level on a pin
 */
static inline bool R6_get_level()
{
	return PORTE_get_pin_level(3);
}

/**
 * \brief Set W7 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void W7_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTE_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set W7 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void W7_set_dir(const enum port_dir dir)
{
	PORTE_set_pin_dir(4, dir);
}

/**
 * \brief Set W7 input/sense configuration
 *
 * Enable/disable W7 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void W7_set_isc(const PORT_ISC_t isc)
{
	PORTE_pin_set_isc(4, isc);
}

/**
 * \brief Set W7 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on W7 is inverted
 *                     false = I/O on W7 is not inverted
 */
static inline void W7_set_inverted(const bool inverted)
{
	PORTE_pin_set_inverted(4, inverted);
}

/**
 * \brief Set W7 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void W7_set_level(const bool level)
{
	PORTE_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on W7
 *
 * Toggle the pin level
 */
static inline void W7_toggle_level()
{
	PORTE_toggle_pin_level(4);
}

/**
 * \brief Get level on W7
 *
 * Reads the level on a pin
 */
static inline bool W7_get_level()
{
	return PORTE_get_pin_level(4);
}

/**
 * \brief Set B7 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void B7_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTE_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set B7 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void B7_set_dir(const enum port_dir dir)
{
	PORTE_set_pin_dir(5, dir);
}

/**
 * \brief Set B7 input/sense configuration
 *
 * Enable/disable B7 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void B7_set_isc(const PORT_ISC_t isc)
{
	PORTE_pin_set_isc(5, isc);
}

/**
 * \brief Set B7 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on B7 is inverted
 *                     false = I/O on B7 is not inverted
 */
static inline void B7_set_inverted(const bool inverted)
{
	PORTE_pin_set_inverted(5, inverted);
}

/**
 * \brief Set B7 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void B7_set_level(const bool level)
{
	PORTE_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on B7
 *
 * Toggle the pin level
 */
static inline void B7_toggle_level()
{
	PORTE_toggle_pin_level(5);
}

/**
 * \brief Get level on B7
 *
 * Reads the level on a pin
 */
static inline bool B7_get_level()
{
	return PORTE_get_pin_level(5);
}

/**
 * \brief Set G7 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void G7_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTE_set_pin_pull_mode(6, pull_mode);
}

/**
 * \brief Set G7 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void G7_set_dir(const enum port_dir dir)
{
	PORTE_set_pin_dir(6, dir);
}

/**
 * \brief Set G7 input/sense configuration
 *
 * Enable/disable G7 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void G7_set_isc(const PORT_ISC_t isc)
{
	PORTE_pin_set_isc(6, isc);
}

/**
 * \brief Set G7 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on G7 is inverted
 *                     false = I/O on G7 is not inverted
 */
static inline void G7_set_inverted(const bool inverted)
{
	PORTE_pin_set_inverted(6, inverted);
}

/**
 * \brief Set G7 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void G7_set_level(const bool level)
{
	PORTE_set_pin_level(6, level);
}

/**
 * \brief Toggle output level on G7
 *
 * Toggle the pin level
 */
static inline void G7_toggle_level()
{
	PORTE_toggle_pin_level(6);
}

/**
 * \brief Get level on G7
 *
 * Reads the level on a pin
 */
static inline bool G7_get_level()
{
	return PORTE_get_pin_level(6);
}

/**
 * \brief Set R7 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void R7_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTE_set_pin_pull_mode(7, pull_mode);
}

/**
 * \brief Set R7 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void R7_set_dir(const enum port_dir dir)
{
	PORTE_set_pin_dir(7, dir);
}

/**
 * \brief Set R7 input/sense configuration
 *
 * Enable/disable R7 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void R7_set_isc(const PORT_ISC_t isc)
{
	PORTE_pin_set_isc(7, isc);
}

/**
 * \brief Set R7 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on R7 is inverted
 *                     false = I/O on R7 is not inverted
 */
static inline void R7_set_inverted(const bool inverted)
{
	PORTE_pin_set_inverted(7, inverted);
}

/**
 * \brief Set R7 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void R7_set_level(const bool level)
{
	PORTE_set_pin_level(7, level);
}

/**
 * \brief Toggle output level on R7
 *
 * Toggle the pin level
 */
static inline void R7_toggle_level()
{
	PORTE_toggle_pin_level(7);
}

/**
 * \brief Get level on R7
 *
 * Reads the level on a pin
 */
static inline bool R7_get_level()
{
	return PORTE_get_pin_level(7);
}

/**
 * \brief Set W8 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void W8_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTF_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set W8 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void W8_set_dir(const enum port_dir dir)
{
	PORTF_set_pin_dir(0, dir);
}

/**
 * \brief Set W8 input/sense configuration
 *
 * Enable/disable W8 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void W8_set_isc(const PORT_ISC_t isc)
{
	PORTF_pin_set_isc(0, isc);
}

/**
 * \brief Set W8 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on W8 is inverted
 *                     false = I/O on W8 is not inverted
 */
static inline void W8_set_inverted(const bool inverted)
{
	PORTF_pin_set_inverted(0, inverted);
}

/**
 * \brief Set W8 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void W8_set_level(const bool level)
{
	PORTF_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on W8
 *
 * Toggle the pin level
 */
static inline void W8_toggle_level()
{
	PORTF_toggle_pin_level(0);
}

/**
 * \brief Get level on W8
 *
 * Reads the level on a pin
 */
static inline bool W8_get_level()
{
	return PORTF_get_pin_level(0);
}

/**
 * \brief Set B8 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void B8_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTF_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set B8 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void B8_set_dir(const enum port_dir dir)
{
	PORTF_set_pin_dir(1, dir);
}

/**
 * \brief Set B8 input/sense configuration
 *
 * Enable/disable B8 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void B8_set_isc(const PORT_ISC_t isc)
{
	PORTF_pin_set_isc(1, isc);
}

/**
 * \brief Set B8 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on B8 is inverted
 *                     false = I/O on B8 is not inverted
 */
static inline void B8_set_inverted(const bool inverted)
{
	PORTF_pin_set_inverted(1, inverted);
}

/**
 * \brief Set B8 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void B8_set_level(const bool level)
{
	PORTF_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on B8
 *
 * Toggle the pin level
 */
static inline void B8_toggle_level()
{
	PORTF_toggle_pin_level(1);
}

/**
 * \brief Get level on B8
 *
 * Reads the level on a pin
 */
static inline bool B8_get_level()
{
	return PORTF_get_pin_level(1);
}

/**
 * \brief Set G8 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void G8_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTF_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set G8 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void G8_set_dir(const enum port_dir dir)
{
	PORTF_set_pin_dir(2, dir);
}

/**
 * \brief Set G8 input/sense configuration
 *
 * Enable/disable G8 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void G8_set_isc(const PORT_ISC_t isc)
{
	PORTF_pin_set_isc(2, isc);
}

/**
 * \brief Set G8 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on G8 is inverted
 *                     false = I/O on G8 is not inverted
 */
static inline void G8_set_inverted(const bool inverted)
{
	PORTF_pin_set_inverted(2, inverted);
}

/**
 * \brief Set G8 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void G8_set_level(const bool level)
{
	PORTF_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on G8
 *
 * Toggle the pin level
 */
static inline void G8_toggle_level()
{
	PORTF_toggle_pin_level(2);
}

/**
 * \brief Get level on G8
 *
 * Reads the level on a pin
 */
static inline bool G8_get_level()
{
	return PORTF_get_pin_level(2);
}

/**
 * \brief Set W9 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void W9_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTG_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set W9 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void W9_set_dir(const enum port_dir dir)
{
	PORTG_set_pin_dir(0, dir);
}

/**
 * \brief Set W9 input/sense configuration
 *
 * Enable/disable W9 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void W9_set_isc(const PORT_ISC_t isc)
{
	PORTG_pin_set_isc(0, isc);
}

/**
 * \brief Set W9 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on W9 is inverted
 *                     false = I/O on W9 is not inverted
 */
static inline void W9_set_inverted(const bool inverted)
{
	PORTG_pin_set_inverted(0, inverted);
}

/**
 * \brief Set W9 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void W9_set_level(const bool level)
{
	PORTG_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on W9
 *
 * Toggle the pin level
 */
static inline void W9_toggle_level()
{
	PORTG_toggle_pin_level(0);
}

/**
 * \brief Get level on W9
 *
 * Reads the level on a pin
 */
static inline bool W9_get_level()
{
	return PORTG_get_pin_level(0);
}

/**
 * \brief Set B9 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void B9_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTG_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set B9 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void B9_set_dir(const enum port_dir dir)
{
	PORTG_set_pin_dir(1, dir);
}

/**
 * \brief Set B9 input/sense configuration
 *
 * Enable/disable B9 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void B9_set_isc(const PORT_ISC_t isc)
{
	PORTG_pin_set_isc(1, isc);
}

/**
 * \brief Set B9 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on B9 is inverted
 *                     false = I/O on B9 is not inverted
 */
static inline void B9_set_inverted(const bool inverted)
{
	PORTG_pin_set_inverted(1, inverted);
}

/**
 * \brief Set B9 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void B9_set_level(const bool level)
{
	PORTG_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on B9
 *
 * Toggle the pin level
 */
static inline void B9_toggle_level()
{
	PORTG_toggle_pin_level(1);
}

/**
 * \brief Get level on B9
 *
 * Reads the level on a pin
 */
static inline bool B9_get_level()
{
	return PORTG_get_pin_level(1);
}

/**
 * \brief Set G9 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void G9_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTG_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set G9 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void G9_set_dir(const enum port_dir dir)
{
	PORTG_set_pin_dir(2, dir);
}

/**
 * \brief Set G9 input/sense configuration
 *
 * Enable/disable G9 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void G9_set_isc(const PORT_ISC_t isc)
{
	PORTG_pin_set_isc(2, isc);
}

/**
 * \brief Set G9 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on G9 is inverted
 *                     false = I/O on G9 is not inverted
 */
static inline void G9_set_inverted(const bool inverted)
{
	PORTG_pin_set_inverted(2, inverted);
}

/**
 * \brief Set G9 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void G9_set_level(const bool level)
{
	PORTG_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on G9
 *
 * Toggle the pin level
 */
static inline void G9_toggle_level()
{
	PORTG_toggle_pin_level(2);
}

/**
 * \brief Get level on G9
 *
 * Reads the level on a pin
 */
static inline bool G9_get_level()
{
	return PORTG_get_pin_level(2);
}

/**
 * \brief Set R9 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void R9_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTG_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set R9 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void R9_set_dir(const enum port_dir dir)
{
	PORTG_set_pin_dir(3, dir);
}

/**
 * \brief Set R9 input/sense configuration
 *
 * Enable/disable R9 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void R9_set_isc(const PORT_ISC_t isc)
{
	PORTG_pin_set_isc(3, isc);
}

/**
 * \brief Set R9 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on R9 is inverted
 *                     false = I/O on R9 is not inverted
 */
static inline void R9_set_inverted(const bool inverted)
{
	PORTG_pin_set_inverted(3, inverted);
}

/**
 * \brief Set R9 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void R9_set_level(const bool level)
{
	PORTG_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on R9
 *
 * Toggle the pin level
 */
static inline void R9_toggle_level()
{
	PORTG_toggle_pin_level(3);
}

/**
 * \brief Get level on R9
 *
 * Reads the level on a pin
 */
static inline bool R9_get_level()
{
	return PORTG_get_pin_level(3);
}

/**
 * \brief Set W10 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void W10_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTG_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set W10 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void W10_set_dir(const enum port_dir dir)
{
	PORTG_set_pin_dir(4, dir);
}

/**
 * \brief Set W10 input/sense configuration
 *
 * Enable/disable W10 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void W10_set_isc(const PORT_ISC_t isc)
{
	PORTG_pin_set_isc(4, isc);
}

/**
 * \brief Set W10 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on W10 is inverted
 *                     false = I/O on W10 is not inverted
 */
static inline void W10_set_inverted(const bool inverted)
{
	PORTG_pin_set_inverted(4, inverted);
}

/**
 * \brief Set W10 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void W10_set_level(const bool level)
{
	PORTG_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on W10
 *
 * Toggle the pin level
 */
static inline void W10_toggle_level()
{
	PORTG_toggle_pin_level(4);
}

/**
 * \brief Get level on W10
 *
 * Reads the level on a pin
 */
static inline bool W10_get_level()
{
	return PORTG_get_pin_level(4);
}

/**
 * \brief Set B10 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void B10_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTG_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set B10 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void B10_set_dir(const enum port_dir dir)
{
	PORTG_set_pin_dir(5, dir);
}

/**
 * \brief Set B10 input/sense configuration
 *
 * Enable/disable B10 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void B10_set_isc(const PORT_ISC_t isc)
{
	PORTG_pin_set_isc(5, isc);
}

/**
 * \brief Set B10 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on B10 is inverted
 *                     false = I/O on B10 is not inverted
 */
static inline void B10_set_inverted(const bool inverted)
{
	PORTG_pin_set_inverted(5, inverted);
}

/**
 * \brief Set B10 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void B10_set_level(const bool level)
{
	PORTG_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on B10
 *
 * Toggle the pin level
 */
static inline void B10_toggle_level()
{
	PORTG_toggle_pin_level(5);
}

/**
 * \brief Get level on B10
 *
 * Reads the level on a pin
 */
static inline bool B10_get_level()
{
	return PORTG_get_pin_level(5);
}

/**
 * \brief Set G10 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void G10_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTG_set_pin_pull_mode(6, pull_mode);
}

/**
 * \brief Set G10 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void G10_set_dir(const enum port_dir dir)
{
	PORTG_set_pin_dir(6, dir);
}

/**
 * \brief Set G10 input/sense configuration
 *
 * Enable/disable G10 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void G10_set_isc(const PORT_ISC_t isc)
{
	PORTG_pin_set_isc(6, isc);
}

/**
 * \brief Set G10 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on G10 is inverted
 *                     false = I/O on G10 is not inverted
 */
static inline void G10_set_inverted(const bool inverted)
{
	PORTG_pin_set_inverted(6, inverted);
}

/**
 * \brief Set G10 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void G10_set_level(const bool level)
{
	PORTG_set_pin_level(6, level);
}

/**
 * \brief Toggle output level on G10
 *
 * Toggle the pin level
 */
static inline void G10_toggle_level()
{
	PORTG_toggle_pin_level(6);
}

/**
 * \brief Get level on G10
 *
 * Reads the level on a pin
 */
static inline bool G10_get_level()
{
	return PORTG_get_pin_level(6);
}

/**
 * \brief Set R10 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void R10_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTG_set_pin_pull_mode(7, pull_mode);
}

/**
 * \brief Set R10 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void R10_set_dir(const enum port_dir dir)
{
	PORTG_set_pin_dir(7, dir);
}

/**
 * \brief Set R10 input/sense configuration
 *
 * Enable/disable R10 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void R10_set_isc(const PORT_ISC_t isc)
{
	PORTG_pin_set_isc(7, isc);
}

/**
 * \brief Set R10 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on R10 is inverted
 *                     false = I/O on R10 is not inverted
 */
static inline void R10_set_inverted(const bool inverted)
{
	PORTG_pin_set_inverted(7, inverted);
}

/**
 * \brief Set R10 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void R10_set_level(const bool level)
{
	PORTG_set_pin_level(7, level);
}

/**
 * \brief Toggle output level on R10
 *
 * Toggle the pin level
 */
static inline void R10_toggle_level()
{
	PORTG_toggle_pin_level(7);
}

/**
 * \brief Get level on R10
 *
 * Reads the level on a pin
 */
static inline bool R10_get_level()
{
	return PORTG_get_pin_level(7);
}

#endif /* ATMEL_START_PINS_H_INCLUDED */
