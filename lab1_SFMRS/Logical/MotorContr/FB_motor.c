
#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif
	#include "MotorContr.h"
#ifdef __cplusplus
	};
#endif
/* FB motorrrrrrrrrrrrrrrrrrrrrrrrr */
void FB_motor(struct FB_motor* inst)
{
	REAL signal_1 = (inst->u) / inst->ke - inst->w;
	REAL signal_2 = signal_1 / inst->Tm;
	
	inst->w_integrator.in = signal_2;
	FB_Integrator(&inst->w_integrator);
	inst->w = inst->w_integrator.out;
	
	inst->phi_integrator.in = inst->w;
	FB_Integrator(&inst->phi_integrator);
	inst->phi = inst->phi_integrator.out;
}
