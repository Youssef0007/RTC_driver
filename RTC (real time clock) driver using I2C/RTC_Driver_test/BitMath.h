/*
 * BitMath.h
 *
 *  Created on: Mar 27, 2024
 *      Author: Sigma
 */

#ifndef BITMATH_H_
#define BITMATH_H_


#define SET_BIT(REG,BIT)            (REG |=  (1 << BIT))
#define CLR_BIT(REG,BIT)            (REG &= ~(1 << BIT))
#define TOG_BIT(REG,BIT)            (REG ^=  (1 << BIT))
#define GET_BIT(REG,BIT)            (1 & (REG >> BIT))


#endif /* BITMATH_H_ */
