/*
 * Class TRANSFER_INTERFACE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_888 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_888 [] = {0xFF11,237,0xFF12,887,0xFFFF};
static EIF_TYPE_INDEX gen_type2_888 [] = {0xFF11,887,0xFFFF};
static EIF_TYPE_INDEX gen_type3_888 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_888 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_888 [] = {0xFF11,887,0xFFFF};
static EIF_TYPE_INDEX gen_type6_888 [] = {0xFF11,887,0xFFFF};
static EIF_TYPE_INDEX gen_type7_888 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_888 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_888 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_888 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_888 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_888 [] = {0xFF11,887,0xFFFF};
static EIF_TYPE_INDEX gen_type13_888 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type14_888 [] = {0xFF11,893,0xFFFF};
static EIF_TYPE_INDEX gen_type15_888 [] = {0xFF11,245,0xFF11,0,0xFF11,0xFFF9,0,173,0xFFFF};
static EIF_TYPE_INDEX gen_type16_888 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type17_888 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type18_888 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type19_888 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type20_888 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type21_888 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_888[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_888},
	{1, (BODY_INDEX)-1, 237, gen_type1_888},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 887, gen_type2_888},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_888},
	{14, (BODY_INDEX)-1, 0, gen_type4_888},
	{15, (BODY_INDEX)-1, 887, gen_type5_888},
	{16, (BODY_INDEX)-1, 887, gen_type6_888},
	{17, (BODY_INDEX)-1, 0, gen_type7_888},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_888},
	{12799, 32, 219, gen_type9_888},
	{22, (BODY_INDEX)-1, 219, gen_type10_888},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_888},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 887, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 887, gen_type12_888},
	{12814, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12795, 0, 219, gen_type13_888},
	{12796, 8, 893, gen_type14_888},
	{12797, 16, 245, gen_type15_888},
	{12798, 24, 219, gen_type16_888},
	{12800, 40, 190, NULL},
	{12801, (BODY_INDEX)-1, 219, gen_type17_888},
	{12802, (BODY_INDEX)-1, 219, gen_type18_888},
	{12803, (BODY_INDEX)-1, 219, gen_type19_888},
	{12804, (BODY_INDEX)-1, 219, gen_type20_888},
	{12799, 32, 219, gen_type21_888},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init888(void);
void Init888(void)
{
	IDSC(desc_888, 0, 887);
	IDSC(desc_888 + 1, 1, 887);
	IDSC(desc_888 + 32, 356, 887);
	IDSC(desc_888 + 43, 366, 887);
}


#ifdef __cplusplus
}
#endif
