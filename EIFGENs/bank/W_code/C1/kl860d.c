/*
 * Class KL_ANY_ROUTINES
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_860 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_860 [] = {0xFF11,237,0xFF12,859,0xFFFF};
static EIF_TYPE_INDEX gen_type2_860 [] = {0xFF11,859,0xFFFF};
static EIF_TYPE_INDEX gen_type3_860 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_860 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_860 [] = {0xFF11,859,0xFFFF};
static EIF_TYPE_INDEX gen_type6_860 [] = {0xFF11,859,0xFFFF};
static EIF_TYPE_INDEX gen_type7_860 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_860 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_860 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_860 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_860 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_860 [] = {0xFF11,859,0xFFFF};


static struct desc_info desc_860[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_860},
	{1, (BODY_INDEX)-1, 237, gen_type1_860},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 859, gen_type2_860},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_860},
	{14, (BODY_INDEX)-1, 0, gen_type4_860},
	{15, (BODY_INDEX)-1, 859, gen_type5_860},
	{16, (BODY_INDEX)-1, 859, gen_type6_860},
	{17, (BODY_INDEX)-1, 0, gen_type7_860},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_860},
	{21, (BODY_INDEX)-1, 219, gen_type9_860},
	{22, (BODY_INDEX)-1, 219, gen_type10_860},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_860},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 859, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 859, gen_type12_860},
	{12586, (BODY_INDEX)-1, 190, NULL},
	{12587, (BODY_INDEX)-1, 190, NULL},
	{12588, (BODY_INDEX)-1, 190, NULL},
	{12589, (BODY_INDEX)-1, 0, NULL},
};

extern void Init860(void);
void Init860(void)
{
	IDSC(desc_860, 0, 859);
	IDSC(desc_860 + 1, 1, 859);
	IDSC(desc_860 + 32, 407, 859);
}


#ifdef __cplusplus
}
#endif
