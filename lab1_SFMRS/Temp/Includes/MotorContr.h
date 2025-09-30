/* Automation Studio generated header file */
/* Do not edit ! */
/* MotorContr  */

#ifndef _MOTORCONTR_
#define _MOTORCONTR_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef struct FB_Integrator
{
	/* VAR_INPUT (analog) */
	float in;
	/* VAR_OUTPUT (analog) */
	float out;
	/* VAR (analog) */
	float dt;
	float state;
} FB_Integrator_typ;

typedef struct FB_motor
{
	/* VAR_INPUT (analog) */
	float u;
	/* VAR_OUTPUT (analog) */
	float w;
	float phi;
	/* VAR (analog) */
	struct FB_Integrator w_integrator;
	float Tm;
	float ke;
	float dt;
	struct FB_Integrator phi_integrator;
} FB_motor_typ;

typedef struct FB_regulator
{
	/* VAR_INPUT (analog) */
	float e;
	/* VAR_OUTPUT (analog) */
	float u;
	/* VAR (analog) */
	float k_p;
	float k_i;
	struct FB_Integrator integrator;
	float iyOld;
	float max_abs_value;
	float dt;
} FB_regulator_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void FB_motor(struct FB_motor* inst);
_BUR_PUBLIC void FB_Integrator(struct FB_Integrator* inst);
_BUR_PUBLIC void FB_regulator(struct FB_regulator* inst);


#ifdef __cplusplus
};
#endif
#endif /* _MOTORCONTR_ */

