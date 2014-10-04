/*
 * Class DEPOSIT_INTERFACE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_884 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_884 [] = {0xFF11,237,0xFF12,883,0xFFFF};
static EIF_TYPE_INDEX gen_type2_884 [] = {0xFF11,883,0xFFFF};
static EIF_TYPE_INDEX gen_type3_884 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_884 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_884 [] = {0xFF11,883,0xFFFF};
static EIF_TYPE_INDEX gen_type6_884 [] = {0xFF11,883,0xFFFF};
static EIF_TYPE_INDEX gen_type7_884 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_884 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_884 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_884 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_884 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_884 [] = {0xFF11,883,0xFFFF};
static EIF_TYPE_INDEX gen_type13_884 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type14_884 [] = {0xFF11,893,0xFFFF};
static EIF_TYPE_INDEX gen_type15_884 [] = {0xFF11,245,0xFF11,0,0xFF11,0xFFF9,0,173,0xFFFF};
static EIF_TYPE_INDEX gen_type16_884 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type17_884 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type18_884 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type19_884 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type20_884 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type21_884 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_884[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_884},
	{1, (BODY_INDEX)-1, 237, gen_type1_884},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 883, gen_type2_884},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_884},
	{14, (BODY_INDEX)-1, 0, gen_type4_884},
	{15, (BODY_INDEX)-1, 883, gen_type5_884},
	{16, (BODY_INDEX)-1, 883, gen_type6_884},
	{17, (BODY_INDEX)-1, 0, gen_type7_884},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_884},
	{12799, 32, 219, gen_type9_884},
	{22, (BODY_INDEX)-1, 219, gen_type10_884},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_884},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 883, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 883, gen_type12_884},
	{12810, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12795, 0, 219, gen_type13_884},
	{12796, 8, 893, gen_type14_884},
	{12797, 16, 245, gen_type15_884},
	{12798, 24, 219, gen_type16_884},
	{12800, 40, 190, NULL},
	{12801, (BODY_INDEX)-1, 219, gen_type17_884},
	{12802, (BODY_INDEX)-1, 219, gen_type18_884},
	{12803, (BODY_INDEX)-1, 219, gen_type19_884},
	{12804, (BODY_INDEX)-1, 219, gen_type20_884},
	{12799, 32, 219, gen_type21_884},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init884(void);
void Init884(void)
{
	IDSC(desc_884, 0, 883);
	IDSC(desc_884 + 1, 1, 883);
	IDSC(desc_884 + 32, 356, 883);
	IDSC(desc_884 + 43, 380, 883);
}


#ifdef __cplusplus
}
#endif
