/*
 * Class COMPOSITE_ARG
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_906 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_906 [] = {0xFF11,237,0xFF12,905,0xFFFF};
static EIF_TYPE_INDEX gen_type2_906 [] = {0xFF11,905,0xFFFF};
static EIF_TYPE_INDEX gen_type3_906 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_906 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_906 [] = {0xFF11,905,0xFFFF};
static EIF_TYPE_INDEX gen_type6_906 [] = {0xFF11,905,0xFFFF};
static EIF_TYPE_INDEX gen_type7_906 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_906 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_906 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_906 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_906 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_906 [] = {0xFF11,905,0xFFFF};
static EIF_TYPE_INDEX gen_type13_906 [] = {0xFF11,253,0xFF11,904,0xFFFF};


static struct desc_info desc_906[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_906},
	{1, (BODY_INDEX)-1, 237, gen_type1_906},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 905, gen_type2_906},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_906},
	{14, (BODY_INDEX)-1, 0, gen_type4_906},
	{15, (BODY_INDEX)-1, 905, gen_type5_906},
	{16, (BODY_INDEX)-1, 905, gen_type6_906},
	{17, (BODY_INDEX)-1, 0, gen_type7_906},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_906},
	{21, (BODY_INDEX)-1, 219, gen_type9_906},
	{22, (BODY_INDEX)-1, 219, gen_type10_906},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_906},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 905, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 905, gen_type12_906},
	{12872, 0, 253, gen_type13_906},
};

extern void Init906(void);
void Init906(void)
{
	IDSC(desc_906, 0, 905);
	IDSC(desc_906 + 1, 1, 905);
	IDSC(desc_906 + 32, 368, 905);
}


#ifdef __cplusplus
}
#endif
