#include <hrt_video.h>
#include "template.h"

int main(void)
{
	hrt_Init();
	REG_DISPCNT &= 0xFF7F;
	return 0;
}
