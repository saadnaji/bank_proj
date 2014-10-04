/*
 * Class SOFTWARE_OPERATION_INTERFACE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_896 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_896 [] = {0xFF11,237,0xFF12,895,0xFFFF};
static EIF_TYPE_INDEX gen_type2_896 [] = {0xFF11,895,0xFFFF};
static EIF_TYPE_INDEX gen_type3_896 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_896 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_896 [] = {0xFF11,895,0xFFFF};
static EIF_TYPE_INDEX gen_type6_896 [] = {0xFF11,895,0xFFFF};
static EIF_TYPE_INDEX gen_type7_896 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_896 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_896 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_896 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_896 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_896 [] = {0xFF11,895,0xFFFF};
static EIF_TYPE_INDEX gen_type13_896 [] = {0xFF11,894,0xFFFF};
static EIF_TYPE_INDEX gen_type14_896 [] = {0xFF11,892,0xFFFF};
static EIF_TYPE_INDEX gen_type15_896 [] = {0xFF11,890,0xFFFF};
static EIF_TYPE_INDEX gen_type16_896 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_896[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_896},
	{1, (BODY_INDEX)-1, 237, gen_type1_896},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 895, gen_type2_896},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_896},
	{14, (BODY_INDEX)-1, 0, gen_type4_896},
	{15, (BODY_INDEX)-1, 895, gen_type5_896},
	{16, (BODY_INDEX)-1, 895, gen_type6_896},
	{17, (BODY_INDEX)-1, 0, gen_type7_896},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_896},
	{21, (BODY_INDEX)-1, 219, gen_type9_896},
	{22, (BODY_INDEX)-1, 219, gen_type10_896},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_896},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 895, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 895, gen_type12_896},
	{12844, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12845, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12846, 0, 894, gen_type13_896},
	{12847, 8, 892, gen_type14_896},
	{12848, 16, 890, gen_type15_896},
	{12849, (BODY_INDEX)-1, 219, gen_type16_896},
	{12850, 24, 190, NULL},
	{12851, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init896(void);
void Init896(void)
{
	IDSC(desc_896, 0, 895);
	IDSC(desc_896 + 1, 1, 895);
	IDSC(desc_896 + 32, 345, 895);
}


#ifdef __cplusplus
}
#endif
