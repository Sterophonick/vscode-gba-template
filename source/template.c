#include <hrt_video.h>
#include <hrt_bios.h>
#include "template.h"
#include "l1_m3_lz_bmp.h"

u32 tempVar = 0;

int main(void)
{
	hrt_Init();
	hrt_DSPSetBGMode(3);
	hrt_DSPEnableBG(2);
	hrt_DSPDisableForceBlank();
	hrt_EnableGreenSwap();
	hrt_LZ77UnCompVRAM((void*)l1Bitmap, (void*)VRAM);
	while(1)
	{
		hrt_VBlankIntrWait();
		tempVar++;
	}
	return 0;
}
