/*
 * Class TRANSFER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_889 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_889 [] = {0xFF11,237,0xFF12,888,0xFFFF};
static EIF_TYPE_INDEX gen_type2_889 [] = {0xFF11,888,0xFFFF};
static EIF_TYPE_INDEX gen_type3_889 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_889 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_889 [] = {0xFF11,888,0xFFFF};
static EIF_TYPE_INDEX gen_type6_889 [] = {0xFF11,888,0xFFFF};
static EIF_TYPE_INDEX gen_type7_889 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_889 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_889 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_889 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_889 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_889 [] = {0xFF11,888,0xFFFF};
static EIF_TYPE_INDEX gen_type13_889 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type14_889 [] = {0xFF11,893,0xFFFF};
static EIF_TYPE_INDEX gen_type15_889 [] = {0xFF11,245,0xFF11,0,0xFF11,0xFFF9,0,173,0xFFFF};
static EIF_TYPE_INDEX gen_type16_889 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type17_889 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type18_889 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type19_889 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type20_889 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type21_889 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_889[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_889},
	{1, (BODY_INDEX)-1, 237, gen_type1_889},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 888, gen_type2_889},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_889},
	{14, (BODY_INDEX)-1, 0, gen_type4_889},
	{15, (BODY_INDEX)-1, 888, gen_type5_889},
	{16, (BODY_INDEX)-1, 888, gen_type6_889},
	{17, (BODY_INDEX)-1, 0, gen_type7_889},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_889},
	{12799, 32, 219, gen_type9_889},
	{22, (BODY_INDEX)-1, 219, gen_type10_889},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_889},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 888, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 888, gen_type12_889},
	{12814, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12795, 0, 219, gen_type13_889},
	{12796, 8, 893, gen_type14_889},
	{12797, 16, 245, gen_type15_889},
	{12798, 24, 219, gen_type16_889},
	{12800, 40, 190, NULL},
	{12801, (BODY_INDEX)-1, 219, gen_type17_889},
	{12802, (BODY_INDEX)-1, 219, gen_type18_889},
	{12803, (BODY_INDEX)-1, 219, gen_type19_889},
	{12804, (BODY_INDEX)-1, 219, gen_type20_889},
	{12799, 32, 219, gen_type21_889},
	{12815, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init889(void);
void Init889(void)
{
	IDSC(desc_889, 0, 888);
	IDSC(desc_889 + 1, 1, 888);
	IDSC(desc_889 + 32, 356, 888);
	IDSC(desc_889 + 43, 366, 888);
}


#ifdef __cplusplus
}
#endif