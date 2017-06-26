/**
 * @file config.c
 *
 * @section desc File description
 *
 * @section copyright Copyright
 *
 * Trampoline Test Suite
 *
 * Trampoline Test Suite is copyright (c) IRCCyN 2005-2017
 * Trampoline Test Suite is protected by the French intellectual property law.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; version 2
 * of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * @section infos File informations
 *
 */

#include "tpl_app_define.h"
#include "m2sxxx.h"

#if WITH_AUTOSAR == YES
  #include "Os.h"
#else
  #include "tpl_os.h"
#endif

#if ISR_COUNT > 0

/** To generate software interrupt, we configure an interrupt on both 
 *  rising and falling edges (in .oil)
 *  Then, a software interrupt is generated by toggling an output.
 */

void sendSoftwareIt(uint32 to_core_id, uint32 channel)
{
	//init the 3 interrupt sources (use GPIO to generate soft interrupt)
	GPIO->GPIO_0_CFG = 0x8F; //both input and output mode, with interrupt
	GPIO->GPIO_1_CFG = 0x8F; //both input and output mode, with interrupt
	GPIO->GPIO_2_CFG = 0x8F; //both input and output mode, with interrupt

	if(channel < 3) {
		GPIO->GPIO_OUT ^= (1 << channel); //toggle GPIO 'channel'
	}
}

//TODO: automatic implementation...
void GPIO0_IRQ_ClearFlag() {NVIC_ClearPendingIRQ(GPIO0_IRQn);}
void GPIO1_IRQ_ClearFlag() {NVIC_ClearPendingIRQ(GPIO1_IRQn);}
void GPIO2_IRQ_ClearFlag() {NVIC_ClearPendingIRQ(GPIO2_IRQn);}



#endif

